#include <iostream>
using namespace std;
int n,top=-1,stack[100],item,i,choice;

void push(){

		if(top==n)
		{
			cout<<"stack overflow ";
		}
		else
		{
			cout<<"enter item to push ";
			cin>>item;
			top=top+1;
			stack[top]=item;
		}
	}

void pop()
	{
		item=stack[top];
		cout<<"item pop :"<<item;
		top=top-1;
	}
	
void peek()
	{
		item=stack[top];
		cout<<"peek item:"<<item;
	}
	
void show()
	{
		if(top==-1)
		{
			cout<<"stack underflow";
		}
		else{
		cout<<"stack :";
		for(i=top;i>=0;i--)
		{
			cout<<stack[i]<<" ";
		}
	}
	}
	
int main()
{
	
	cout<<"enter size of a stack ";
	cin>>n;



	
	label:
	cout<<"\nchoose stack operation\n1.print stack\n2. push\n3.pop\n4. peek\n5.exit\n";
	cin>>choice;
	
	switch(choice)
	{
	
	case 1:
		show();
		goto label;
		break;
	case 2:
	    push();
		goto label;
		break;
	case 3:
		pop();
		goto label;
		break;
	case 4:
		peek();
		goto label;
		break;
	case 5:
		cout<<"bye bye";
		break;
	default:
		cout<<"enter valid choice";
		goto label;
		break;
		
	}
	
	return 0;
}
