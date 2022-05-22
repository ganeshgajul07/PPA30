#include<stdio.h>

int Addition(int no1, int no2)
{
	
	
	int ans=0;
	ans= no1+no2;
	return ans;
}



int main ()
{
		int a=10,b =20;
		int ret =0;
		
		
		// ret= Addition(a,b);
		
		// printf("Addition is %d\n",ret);	
	
		int (*fptr) (int , int);
		
		fptr = Addition;
		
		printf("Address of addition is %d\n",Addition);
		
		ret = fptr(a,b);
		
		printf("Addition os %d\n",ret);
		
		
			
	return 0;
	
	
}