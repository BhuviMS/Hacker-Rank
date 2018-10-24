#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
        int getHeight(Node* root)
		{
          //Write your code here
                 if(root==NULL) return 0;
                else
                {
                    int ldepth=getHeight(root->left);
                    int rdepth=getHeight(root->right);
                    
                    if(ldepth>rdepth)   return (ldepth+1);
                    else if(ldepth==rdepth)	return (ldepth-1);
                    else return (rdepth+1);
                }
        }
		void levelOrder(Node * root){
      //Write your code here
      		int h = getHeight(root)+1; 
    int i; 
    for (i=1; i<=h; i++)
	printGivenLevel(root,i);
	} 
	
	void printGivenLevel(Node* root, int level) 
{ 
    if (root == NULL) 
        return; 
    else if (level == 1) 
        cout<< root->data<<" "; 
    else if (level > 1) 
    { 
        printGivenLevel(root->left, level-1); 
        printGivenLevel(root->right, level-1); 
    } 
}
	};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}	
