#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;
};

 node* top=NULL;

void push(int val){
	node* newnode= NULL;
	newnode = new node();
	newnode->data= val;
	newnode->next=top;
	top = newnode;
}

void pop(){
	if (top==NULL)
	cout<<"stack underflow"<<endl;
	else
	{
	cout<<"the popped element is "<<top->data <<endl;
	top = top->next;
}
}
void display(){
	 node* ptr= NULL;
	 ptr= new node();
	if(top==NULL)
	cout<<"stack is empty";
	else{
		ptr= top;
		cout<<"stack elements are: ";
		while (ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	}
	cout<<endl;
}

int main(){
	int ch ,val;
	cout<<"1.push in stack"<<endl;
	cout<<"2. pop from stack"<<endl;
	cout<<"3. display stack"<<endl;
	cout<<"4. exit"<<endl;
	
	do
	{
		cout <<"enter choice: "<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"enter value to be pushed: "<<endl;
				cin>>val;
				push(val);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				cout<<"exit"<<endl;
				break;
			default:
				cout<<"invalid choice";
		}
		}while(ch!=4);
		return 0;
	
}
