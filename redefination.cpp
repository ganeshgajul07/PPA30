#include<iostream>
using namespace std;

class Demo
{
	public :
	int i,j;
	
	
	void fun() 	//Defination
	{
		cout<<"Inside fun\n";
	}
	
	void gun()  	//Definition
	{
		cout<<"Inside fun\n";
	}
	
};

class Hello : public Demo
{
	public :
		int x,y;
		
		void sun()
		{
			cout<<"Inside sun\n";	//Defination
		}
		
		void gun()	//redefination
		{
			cout<<"Inside gun of child\n";
		}
};

int main()
{
	
	
	return 0;
}