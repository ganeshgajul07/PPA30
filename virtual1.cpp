#include<iostream>
using namespace std;

class Base
{
	
	public :
		int x,y;	
};

class Derived : public Base
{
	public :
		inti,j;
		
};

int main()
{
	//static Memory
	Base bobj;
	Derived dobj;
	
	//Dynamic memory
	Base *bp = new Base();
	Derived *dp = new Derived();
	
	return 0;
}