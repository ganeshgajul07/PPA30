#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr = NULL;
	
	ptr = (int *)malloc(5 * sizeof(int)); //Step 1: Allocate the memory
	
	ptr = (int *)realloc(ptr,7 * sizeof(int));
	
	ptr = (int *)realloc(ptr, 3* sizeof(int));
	
	// step 2: Use the memory
	
	
	free(ptr);		// Step 3: Free the memory
	
	return 0;
}