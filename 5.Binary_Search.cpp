#include <stdio.h>
int main()
{
	int arr[20], n;
	printf("Enter the number of elements in array :");
	scanf("%d",&n);
	printf("Enter %d elements in ascending order :",n);
	for ( int i=0; i<n; i++ )
	{
		scanf("%d",&arr[i]);
	}
	
	int search;
	printf("Enter the element you want to search :");
	scanf("%d",&search);
	
	int beg = 0, end = n, mid, loc = 0;
	for ( int i = 0; i<n; i++ )
	{
		mid = (beg+end)/2;
		if ( search < arr[mid] )
			end = mid -1;
		else if( search > arr[mid] )
			beg = mid+1;
		else if ( arr[mid] == search )
			loc = mid+1;
	}
	if ( loc != 0 )
		printf("Element found at location %d",loc);
	else
		printf("Element is not present in array.");	
}
