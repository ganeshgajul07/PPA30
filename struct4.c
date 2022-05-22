#include<stdio.h>

// structure Declaration
struct Demo
{
	int iNo;
	float fValue;
	int iValue;
		
};

int main()
{
	// structure object creation
	struct Demo obj1;
	
	struct Demo *p = NULL ;
	p =&obj1;
	
	// sturct Demo *p= obj1;
	p-> iNo = 11;
	p-> fValue =10.11;
	p-> iValue = 21;
	
	printf("%d\n",p->iValue);
	printf("%d\n",obj1.iValue);
		
	
	
	return 0;
}