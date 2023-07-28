#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
};
void print(node* n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}

	void insertatbeg(node* head)
{
	node* first= NULL;

	first= new node();
	
	first->data=head->data;
	first->next=head->next;
	
	cout<<"enter data of new node";
	cin>>head->data ;
	head->next=first;
	
}

void insertatend(node* third)
{
	node* fourth= NULL;
	
	fourth= new node();
	
	third->next=fourth;
	fourth->data= 4;
	fourth->next=NULL;
}

void insertinbetween(node* second, node* third)
{
	node* newp=NULL;
	
	newp=new node();
	
	second->next=newp;
	newp->data=6;
	newp->next=third;
}

void deletionatbeg(node* head,node* second)
{
		head->data=second->data;
		head->next=second->next;
		delete second;
}

void deletionatend(node* second,node* third)
{
	second->next=NULL;
	delete third;
}

void deletioninbetween(node* head,node* second,node* third)
{
	head->next=third;
	delete second;
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
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	int op;
	label:
	cout<<"\nselect an operation to perform on linked list: \n 1.to print list\n 2.to insert data in begining\n 3.to insert in end\n 4.to insert in between elements \n 5.to delete first element \n 6.to delete last element \n 7. to delete element in between\n 8. exit\n";
	cin>>op;
	switch(op){
		case 1:
				print(head);
				goto label;
				break;
		case 2:
				insertatbeg(head);
				goto label;
				break;
		case 3:
				insertatend(third);
				goto label;
				break;
		case 4:
				insertinbetween(second,third);
				goto label;
				break;
		case 5:
				deletionatbeg(head,second);
				goto label;
				break;
		case 6:
				deletionatend(second,third);
				goto label;
				break;
		case 7:
				deletioninbetween(head,second,third);
				goto label;
				break;
		case 8:
				cout<<"bye bye";
				break;
		default:
			cout<<"enter valid choice";
			goto label;
	}
	
	
	



	
	
	
	return 0;
}
