#include<iostream>
using namespace std;

class Demo
{
	public:
	int x;
	int y;
	
	Demo()
	{
		cout<<"Inside default constructor\n";
	}
	
	~Demo()
	{
		cout<<"Inside the Destructor\n";
	}
	void fun()
	{
		cout<<"Inside fun\n";
	}
		
};

int main()
{
	Demo obj; 		//static object creation
	
	Demo *ptr = NULL;
		
	ptr = new Demo;  	//Dynamic object creation
	
	
	obj.fun();	// direct accessing operator
	
	ptr -> fun();	//Indirect accessing operator
	
	delete ptr;
	
	// Logic
	return 0;
}