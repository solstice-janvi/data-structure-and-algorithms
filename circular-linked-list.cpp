#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	node* prev;
};
void print(node* head)
{
	node* n=head;
	cout<<"doubly linked lis \n";
	do
	{
		cout<<n->data<<" ";
		n=n->next;
	}while(n!=head);
	
}
void reverse(node* third)
{
	node* n=third;
	cout<<"\n reverse of list\n";
	do
	{
		cout<<n->data<<" ";
		n=n->prev;
	}while(n!=third);
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
	head->prev=third;
	
	second->data=2;
	second->next=third;
	second->prev=head;
	
	third->data=3;
	third->next=head;
	third->prev=second;
	
	print(head);
	reverse(third);
	
	return 0;
}
