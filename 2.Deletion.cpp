#include <stdio.h>
int main()
{
	int array[7] = {13,6,4,6,7,9,0};
	int size = 7;
	printf("Intial array is :\n");
	for ( int i=0; i<size; i++ )
	{
		printf("%d ",array[i]);
	}
	
	int pos;
	
	printf("\nEnter the position of element you want to delete :");
	scanf("%d", &pos);
	pos--;
	size--; 
	for (int  i= pos; i<size; i++ )
	{
		array[i] = array[i+1];
	}
	
	printf("Final array is :\n");
	for ( int i = 0; i<size; i++ )
	{
		printf("%d ", array[i]);
	}
	
}
