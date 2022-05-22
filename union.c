#include<stdio.h>

struct Demo
{
	int i;
	int j;
	float f;
	
};

union Hello
{
	
	int i;
	intt j;
	float f;
	
		
}



int main ()
{
		struct Demo dobj;
		union Hello hobj;
		
		dobj.i =11;
		dobj.j= 21;
		
		hobj.i = 11;
		hobj.j = 21;
		
		printf("%d\n",sizeof(dobj));
		printf("%d\n",sizeof(hobj));

		printf("%d\n",sizeof(hobj));
		
		
		incomplete  program
		
		
	return 0;
}
