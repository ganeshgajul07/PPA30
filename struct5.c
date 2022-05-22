#include<stdio.h>

struct Demo
{
	int iNo;
	float fValue;
	int iValue;
	
	
};

int main()
{
	struct Demo Arr[4];
	
	Arr[0].iNo = 11;
	Arr[0].fValue = 10.11;
	Arr[0].iValue = 21;
	
	Arr[1].iNo = 51;
	Arr[1].fValue = 30.11;
	Arr[1].iValue = 101;
	
	printf("%d\n",Arr[0].iNo);
		
	
	return 0;
	
}