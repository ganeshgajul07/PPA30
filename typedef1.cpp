#include<iostream>
using namespace std;

int main()
{
	struct Demo
	{
		int no1;
		int no2;
	}
	
	struct Demo obj;
	struct Demo *p = &obj;
	struct Demo **q = &p;
	
	/*
	typedef struct Demo
	{
			int no1;
			int no2;
					
	} DEMO, *PDEMO, **PPDEMO;
	*/
	
	//struct Demo obj;
	DEMO obj;
	
	//Struct Demo *p = &obj;
	PDEMO p = &obj;
	
	//struct Demo **q = &p;
	PPDEMO q= &p;
	
	
	
	return 0;
}