#include<stdio.h>

struct Demo
{
	const int i;
	const int j;	
};

int main ()
{
	

	const struct Demo obj = {11,21};
		
	//obj.i = 11;  // not allowed
	//obj.j= 21;	// not allowed	
		
	printf("The Value of i before increment %d\n",obj.i);
	printf("%d\n",obj.j);
	
	//obj.i++;
	//printf("The Value of i after increment %d\n",obj.i);
	
	return 0;
}