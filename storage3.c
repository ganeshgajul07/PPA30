#include<stdio.h>

// Demo he function ch naw ahe je tumhi kahi pan deau shakata

void Demo()
{
auto int A=10;
A++; 		//++ ne value ekane increment hote
printf("%d\n",A);

}
// %d mhanaje d for decimal
// \n mhanaje new line jynae apan new line war display karato


void Hello()
{
static int A=10;
A++; 		//++ ne value ekane increment hote
printf("%d\n",A);

}

int main()
{
Demo (); //function call 

Demo (); //function call 

Hello();
Hello();

return 0;

}