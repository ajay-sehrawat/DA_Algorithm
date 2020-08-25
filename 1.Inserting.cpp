#include <stdio.h>
int main()
{
	//Intial array we have 
	int array[9] = {0,1,2,3,4,6,7,8,9};
	
	printf( " The intial array elements are :\n");
	for ( int i = 0; i<9; i++ )
	{
		printf("%d ",array[i]);
	}
	int pos, element, size = 9;
	
	//Taking pstion input
	printf("\nEnter the postion where you want to insert element :");
	scanf("%d", &pos);
	
	printf("\nEnter the element you want to insert: ");
	scanf("%d", &element);
	
	pos--;
	
	for ( int i = size; i>=pos; i-- )  //Here size of array is 9 as we have to satrt from 9 in reverse order
	                                //as originaly 9 is at 8 pos in comp;
	{
		array[i] = array[i-1];
	}

	array[pos] = element;
	
	//Final array
	printf("Final array is :\n");
	for ( int i =0; i<=size; i++ )
	{
		printf("%d ", array[i]);
	}
}

