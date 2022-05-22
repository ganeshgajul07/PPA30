#include<stdio.h>

int main()
{
	auto int iStd = 0;
	
	printf("Enter your standard\n");
	
	scanf("%d",&iStd);
	
	switch(iStd)
	{
		case 1 :
			printf("Your exam is at 8 o'clock\n");
			break;
			
		case 2 :
			printf("Your exam is at 9 o'clock\n");
			break;
			
		case 3 :
			printf("Your exam is at 10 o'clock\n");
			break;
			
		case 4 :
			printf("Your exam is at 11 o'clock\n");
			break;
			
		case 5 :
			printf("Your exam is at 12 o'clock\n");
			break;
			
		default :
			printf("Invalid standard\n");
			// break; optional to write break for default
	}
	
	
	
	
	return 0;
}