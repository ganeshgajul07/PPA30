#include<stdio.h>
#include<stdlib.h>

int main ()
{
	//int Arr[5];   //static memory allocation
	int size = 0;
	int *ptr = NULL ;
	
	
	printf("Enter number of elements that you want to allocate:");
	scanf("%d",&size);
	
	ptr = (int *)malloc(size * sizeof(int)); //Step 1: Allocate the memory
	
	if (ptr == NULL)
	{
		printf("unable to allocate memory\n");
		
	}
	else 
	{
		printf("Memory sucesfully allocated\n");
				
	}
	// step 2: Use the memory
	
	
	free(ptr);   //step 3 : Free the memory
			
	
	return 0;
	
}