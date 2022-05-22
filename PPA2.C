#include<stdio.h>

int Addition (int No1, int No2)
{
int Ans;

Ans = No1 + No2;

return Ans;

}



int main ()
{
int A=10,B=11, C=0;

C = Addition(A,B);

printf("output of addition is %d",C);

return 0;

}