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
	
	int temp,j=0;
	for ( int i = 1; i<n; i++ )
	{
		temp = arr[i], j=i-1;
		while ( temp < arr[j] )
		{
			arr[j+1] = arr[j];
			if ( j < 0 )
			break;
			else
			j--;
		}
		arr[j+1] = temp;
	}
			
	printf("Sorted array is :");
	for ( int i = 0; i<n; i++ )
	{
		printf("%d ",arr[i]);
	}
}
