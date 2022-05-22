#include<iostream>
using namespace std;

class Base1 
{
	public :
		int i ,j;
		
	Base1()
	{
		cout<<"Base1 Constructor\n";
	}
	~Base1()
	{
		cout<<"Base1 Destructor\n";
	}
};

class Base2
{
	public :
		int x ,y;
		
	Base2()
	{
		cout<<"Base2 Constructor\n";
	}
	~Base2()
	{
		cout<<"Base2 Destructor\n";
	}
};

class Derived : public Base2, Base1
//class Derived : public Base1, Base2 ALLOWED Sequence matters 
{
	public :
		int a;
		
		Derived()
		{
			cout<<"Derived  Constructor\n";
		}
		~Derived()
		{
			cout<<"Derived  Destructor\n";
		}
			
};

int main()
{
	Derived dobj;
	
	
	return 0;
}