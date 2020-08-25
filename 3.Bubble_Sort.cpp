#include <stdio.h>
int main()
{
	int array[20], no_elements;
	printf("Enter the number of elements in array :");
	scanf("%d", &no_elements);
   	
	printf("Enter %d elements :",no_elements);
	for ( int i = 0; i<no_elements; i++ )
	{
		scanf("%d",&array[i]);
	}
	
	//Heart of equation 
	int temp1, temp2;
	int i = 0, swap = 0;
	for (int i = 0; i<no_elements; i++ )
	{
		for ( int j = 0; j<no_elements-i; j++)
		{
			temp1 = array[j];
			temp2 = array[j+1];
 			if ( temp1 > temp2 )
 			{
 				swap = array[j];
 				array[j] = array[j+1];
 				array[j+1] = swap;
		    }
	    }
	}
	
	//Final array
	printf("\nFinal array is: ");
	for ( int i=0; i<no_elements; i++ )
	{
		printf("%d ", array[i]);
    }
}
