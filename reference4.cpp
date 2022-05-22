#include<iostream>
using  namespace std;

intmain ()
{
	int no = 11;
	int *p = &no;
	
	int *(&q)= p;
	cout<<*q;
	
	return 0;
}