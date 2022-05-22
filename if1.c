#include<stdio.h>

int main()
{
	auto int marks = 0;
	
	printf("Enter your marks\n");
	scanf("%d",&marks);
	
	//printf("Your Entered marks is :%d\n",marks);
	
	if (marks>=66)
	{
		
		printf("Distinction holder....\n");
		
	}
	else
	{
		printf("Not a distinction holder....\n");
	}

	
	

	return 0;
}