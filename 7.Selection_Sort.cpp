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
	
	int temp, loc;
	for ( int i=0; i<n; i++ )
	{
		temp = arr[i]; loc = i;
		for ( int j = i+1 ; j<n; j++ )
		{
			if ( temp > arr[j] )
			{
				//Updating minimum value for next check;
				temp = arr[j];
				loc = j;
			}
			else
			continue;
		}
		//Swaping Values here loc has value location so swap intial value with smallest;
		//Temp has smallest value so give intial value smallest after swaping
		arr[loc] = arr[i];
		arr[i] = temp;	
	}
	//Printing Sorted Array	
	printf("Sorted array is :");
	for ( int i = 0; i<n; i++ )
	{
		printf("%d ",arr[i]);
	}
}
