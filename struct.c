#include<stdio.h>

// Structure Declaration
struct Demo
{
	int iNo;
	float fValue;
	int iValue;
	double dValue;
	
};

int main()
{
	// Strucutre object creation
	struct Demo obj;
	
	//Object initialization
	obj.iNo = 11;
	obj.fValue = 10.11;
	obj.iValue = 21;
	obj.dValue= 20.11;
		
	printf("%d\n",obj.iValue); //21
	printf("%d\n",sizeof(obj));  // 20
	printf("%d\n",sizeof(obj.iValue)); //4	
	printf("%lf\n",obj.dValue); // 20.11
	printf("%d\n",sizeof(obj.dValue)); //
	
	return 0;
}