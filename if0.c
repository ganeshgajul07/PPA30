#include<stdio.h>

int main()
{
	int No1= 0, No2=0;
	
	int sum= 0;
		
	printf("Enter your 1st numer\n");
	scanf("%d",&No1);
	
	printf("enter your 2nd number\n");
	scanf("%d",&No2);
	
	sum = No1 + No2;
	
	if (sum>=0)
	{
		printf("Sum is positive\n");
	}
	else
	{
		printf("Sum is negative\n");
	}
	
	
	return 0;
}