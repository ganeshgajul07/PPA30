#include<stdio.h>

struct Demo
{
	int iNo;
	float fValue;
	int iValue;
		
};

int main()
{
	struct Demo obj1;
	
	obj1.iNo= 51;
	obj1.iValue=21;
	obj1.fValue=11.21;
	
	
	printf("Address of object is :%d\n",&obj1);
		
	
	
	return 0;
}