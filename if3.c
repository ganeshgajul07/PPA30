#include<stdio.h>

int main()
{
	auto int iStd = 0;
	
	printf("Enter your standard\n");
	
	scanf("%d",&iStd);
	
	if(iStd==1)
	{
		printf("Your exam is at 8 o'clock\n");
	}
	 else if(iStd==2)
	{
		printf("Your exam is at 9 o'clock");
	}
	
	 else if(iStd==3)
	{
		printf("Your exam is at 10 o'clock");
	}
	
	 else if(iStd==4)
	{
		printf("Your exam is at 11 o'clock");
	}
	else if(iStd==5)
	{
		printf("Your exam is at 12 o'clock");
	}
	
	else
	{
		printf("Invalid standard\n");
			
	}
	
	
	
	return 0;
}