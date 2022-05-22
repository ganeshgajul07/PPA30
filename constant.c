#include<stdio.h>

int main ()
{
	int No1=10;

	const int No2 = 10;

	No1++; //Allowed
	
	// No2++; Not Allowed
	
	// printf("%d\n", No1);
	// printf("%d\n", No2);
	
	No1 =20; //reinitialising the value Allowed
	// No2= 20; //reinitialising the value is not Allowed

	return 0;


}