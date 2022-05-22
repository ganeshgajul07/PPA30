#include<stdio.h>

struct Demo
{
	int i;
	int j;	
};

int main ()
{
	
	const struct Demo obj;
	
	obj.i = 11;
	obj.j= 21;
	
	printf("%d\n",obj.i);
	printf("%d\n",obj.j);
	
	
	return 0;
	
}