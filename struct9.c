#include<stdio.h>

struct Demo
{
	int i;
	int j;	
};

int main ()
{
	
	// const struct Demo obj; //Not allowed
	const struct Demo obj = {11,21};
	
	
	//obj.i = 11;  // not allowed
	//obj.j= 21;	// not allowed
	
	printf("%d\n",obj.i);
	printf("%d\n",obj.j);
	
	
	return 0;
	
}