#include<stdio.h>
#include<string.h>

int strlenX(char str[])
{
	int iCnt =0;
	int iLength = 0;
	
	
	for(iCnt=0;str[iCnt]!='\0';iCnt ++)
	{
		iLength ++;
	}
	return iLength;
	
}

int strlenXX(char str[])
{
	int iCnt = 0;
	int iLength = 0;
	
	while(str[iCnt]!='\0')
	{
		iCnt ++;
		iLength++;
	}

	return iLength;
}

/////////////////////////////////////////////////
//
// Fucntion Name : 
// Input : 
// Output : Strlen
// Description :
// Author : Ganesh Ambadas Gajul
// Date : 06/02/2022
//
///////////////////////////////////////////////////////

int strlenXXX(char *str)
{
	int iCnt = 0;
	
	while ((*str) !='\0')
	{
		iCnt++;
		str ++;
	}
	
	return iCnt;
}


int main()
{
	char Arr[20];
	int iRet =0;
	
	printf("Enter your name:\n");
	scanf("%s",Arr);
	
	
	iRet = strlenXXX(Arr);
	
	printf("Strng length is : %d\n",iRet);
	
		
	return 0;
}