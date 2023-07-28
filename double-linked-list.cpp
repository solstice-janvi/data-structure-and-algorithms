#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	node* prev;
};
void print(node* n)
{
	cout<<"doubly linked lis \n";
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
	
}
void reverse(node* n)
{
	cout<<"\n reverse of list\n";
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->prev;
	}
}

int main()
{
	node* head=NULL;
	node* second =NULL;
	node* third =NULL;
	
	//allocate 3 node in heap
	head= new node();
	second= new node();
	third= new node();
	
	
	head->data=1;
	head->next=second;
	head->prev=NULL;
	
	second->data=2;
	second->next=third;
	second->prev=head;
	
	third->data=3;
	third->next=NULL;
	third->prev=second;
	
	print(head);
	reverse(third);
	
	return 0;
}
