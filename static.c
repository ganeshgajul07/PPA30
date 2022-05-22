#include<stdio.h>

void Demo()
{
	auto int i =10;
	static int j = 10;
	
	i ++;
	j ++;
	
	printf("value of i:%d\n",i);
	
	printf("value of j:%d\n",j);
	
}

int main()
{
	printf("Inside main\n");
	
	Demo();
	Demo();
	Demo();
	return 0;
}