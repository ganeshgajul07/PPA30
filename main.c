#include<stdio.h>

int i=10;

extern int j;

extern void fun();

// extern int no; //

int main()
{
	printf("inside main\n");
	printf("value  of i:%d\n",i);
	
	printf("value  of j:%d\n",j);
	
	// printf("value  of no:%d\n",no); not allowed
	fun();
	
	return 0;
}