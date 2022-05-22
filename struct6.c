#include<stdio.h>

struct Demo
{
	
	int Arr[3];
	float Brr[2];
	
};


int main()
{
	struct Demo obj;
	
	obj.Arr[0]= 10;
	obj.Arr[1]= 20;
	obj.Arr[2]= 30;
	
	obj.Brr[0]= 10.11;
	obj.Brr[1]= 20.11;
	
	printf("%d\n",obj.Arr[2]); //30	
	printf("%f\n",obj.Brr[0]);
	return 0;
}