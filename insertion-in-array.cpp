#include <iostream>
int main()
{

	
	int arr[5]={23,34,78,4};
	int i,n=4;
	printf("elements of array are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	int x=45;
	int pos=4;
	n++;
	for(i=n-1;i>=pos;i--)
		arr[pos-1]=x;
		printf("elements of array are after insertion:\n");
		for(i=0;i<5;i++)
		printf("%d\n",arr[i]);
	
	return 0;
	
}
