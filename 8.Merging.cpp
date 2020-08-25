//Merging Algorithm
#include <stdio.h>
int main()
{
	int a, b, n;  //For number of elements in array
	printf("Enter number of Elements in Array 1 and 2:");
	scanf("%d%d",&a,&b);
	
	n = a+b;
	int arr_1[a], arr_2[b], arr[n];
	printf ("Enter elemetns of Array 1 in ascending order :");
	for ( int i=0; i<a; i++)
	{
		scanf("%d",&arr_1[i]);
	}
	
	printf ("Enter elemetns of Array 2 in ascending order :");
	for ( int i=0; i<b; i++)
	{
		scanf("%d",&arr_2[i]);
	}


	int na=0, nb=0, nc=0; //na for arr_1, nb for arr_2, nc for final arr; 
	while ( na < a && nb< b ) //For checking if one array ends or not
	{
		if ( arr_1[na] < arr_2[nb] )
		{
			//Assign to C array
			arr[nc] = arr_1[na];
			na++;
			nc++;
		}
		else
		{
			arr[nc] = arr_2[nb];
			nb++;
			nc++;
		}
	}
	if ( na >= a )
	{
		for ( int i=0; i<b-nb; i++ ) //b-nb beacuse we have to increase counter from how many element left
		{
			arr[nc+i] = arr_2[nb+i]; //nc is already updated last time no need to increase for first entry
		}		
	}
	else
	{
		for ( int i=0; i<a-na; i++ ) // a-na beacuse we have to increase counter
		{
			arr[nc+i] = arr_1[na+i];
		}
	}
	
	printf("The final array is :");
	for ( int i=0; i<n; i++ )
	{
		printf("%d ",arr[i]);
	}
}
