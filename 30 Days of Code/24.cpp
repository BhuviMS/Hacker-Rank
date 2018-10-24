#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
    	 
          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
           Node* removeDuplicates(Node *head)
          {
            //Write your code here
               if(head==NULL)	return NULL;
               else
               {
               	Node* pos=head;
               	Node* pos1=head;
               	Node* temp=NULL;
               	int cur,cur1;
               	
               	while(pos!=NULL)
               	{					   
               		cur=pos->data;
               		pos1=pos->next;
               		if(pos1!=NULL)
               		{
               			while(pos1!=NULL)
               			{
               				cur1=pos1->data;
               				if(cur==cur1)
               				{
               					temp=pos1;
               					pos1=pos1->next;
               					pos->next=pos->next->next;
               					delete temp;
               					temp=NULL;         					
							}
							else
							{
							   	pos=pos->next;
							   	break;
							}
						}
					}
					else break;
				  }
				  return head;
			  	}
			   
          
            
          }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}
