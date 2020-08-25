#include <stdio.h>
int main()
{
	int arr[20], n;
	printf("Enter the number of elements in array :");
	scanf("%d",&n);
	printf("Enter %d elements :",n);
	for ( int i=0; i<n; i++ )
	{
		scanf("%d",&arr[i]);
	}
	
	int search, loc  = 0;
	printf("Enter the element you want to search :");
	scanf("%d",&search);
	
	for ( int i=0; i<n; i++ )
	{
		if ( search == arr[i] )
		{
			loc = i+1;
		}
	}
	if ( loc != 0 )
	printf("Item found at location :%d", loc);
	else
	printf("Item is not available in array.");
}
