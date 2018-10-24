#include<bits/stdc++.h>

using namespace std;

class Node
{
	public:
	 	int data;
		Node* left;
		Node* right;
		
		 Node(Node* root,int d)
		{
	 		data=d;
	 		left=NULL;
	 		right=NULL;
		 }
};

class Solution:public Node
{
	public: 
		Solution(Node* root,int d):Node(root,d)
		{
		}
		
		Node* insert(Node* root,int x)
		{
			if(root==NULL)	return new Node(root,x);
			else
			{
				if(x<root->data)
				{
					root->left=insert(root->left,x);
				}
				else
				{
					root->right=insert(root->right,x);
				}
				return root;
			}
		}
		Node* preorder(Node* root)
		{
			if(root!=NULL)
			{
				cout<<root->data<<endl;
				preorder(root->left);
				preorder(root->right);
				
			}
			return root;
		}
		Node* inorder(Node* root)
		{
			if(root!=NULL)
			{
				inorder(root->left);
				cout<<root->data<<endl;
				inorder(root->right);	
			}
			return root;
		}
		Node* postorder(Node* root)
		{
			if(root!=NULL)
			{
				postorder(root->left);
				postorder(root->right);
				cout<<root->data<<endl;
			}
			return root;
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
};

int main()
{
	int n,i,s;
	cin>>n;
	Node* root=NULL;
	Solution sol(root,0);
	for(i=0;i<n;i++)
	{
		cin>>s;
		root=sol.insert(root,s);
	}
	sol.preorder(root);
	cout<<sol.getHeight(root)<<endl;
	return 0;
}
