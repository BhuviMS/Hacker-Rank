#include<bits/stdc++.h>

using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		Node(int d)
		{
			data=d;
			next=NULL;
		}
};

class Solution
{
	public:
	
		Node* insert(Node* head,int data)
		{
			Node* listptr=head;
			if(head==NULL)		head=new Node(data);
			else
			{
				while(listptr->next!=NULL)		listptr=listptr->next;
				listptr->next=new Node(data);
			}
			return head;
		}
		
		void display(Node* head)
		{
			Node* listptr=head;
			if(head==NULL)	return;
			else
			while(listptr)
			{
				cout<<listptr->data<<" ";
				listptr=listptr->next;
			}
		}
};


int main()

{
	Node* head =NULL;
	Solution Mylist;
	int T,data;
	cin>>T;
	while(T-->0)	
	{
		cin>>data;
		head=Mylist.insert(head,data);
	}
	Mylist.display(head);
}
