#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr = NULL;
	
	ptr = (int *)realloc (NULL,5 *sizeof(int));  //It behaves like malloc
	
	realloc(ptr,0);	// Step 3: Free the memory
	
	return 0;
}