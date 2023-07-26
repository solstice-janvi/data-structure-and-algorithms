#include <iostream>
int main()
{

	
	int arr[]={23,34,78,4};
	int i,n=4;
	printf("elements of array are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	n--;
	printf("array after deletion:\n");
		for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
	
}
