#include<stdio.h>

int main ()
{
	
	int Arr[5]= {10,20,30,40,50};
	
	int *p =&(Arr[0]);
	
	int *q =&(Arr[4]);
	
	printf("Value of p before increment is %d\n",p);
	
	p++;
	// p =p + 1 //as p is pointer
	// p= p + 1*sizeof(int)
	// p=p + 1*4
	// p= p + 4
	// p= 100 + 4 //considering value of p is 100
 	// p =104
	
	
	
	printf("Value of p after increment is %d\n",p);
	
	printf("Value of q before increment is %d\n",q);
	q--;
	// q =q - 1 //as p is pointer
	// q= q - 1*sizeof(int)
	// q =q - 1*4
	// q = q - 4
	// q = 116 - 4 //considering value of p is 100
 	// q =112
	
	printf("Value of q after increment is %d\n",q);
	
	return 0;
	
}