#include<iostream>
using namespace std;

class Base 
{
	public :
		int i ,j;
		
	Base()
	{
		cout<<"Base Constructor\n";
	}
	~Base()
	{
		cout<<"Base Destructor\n";
	}
};

class Derived : public Base
{
	public :
	int a, b, c;
	
	Derived()
	{
		cout<<"Derived constructor\n";
	}
	~Derived()
	{
		cout<<"Derived Destrcutor\n";
	}
	
};

class Derived1 : public Derived
{
	public :
		int k,l;
	
	Derived1()
	{
		cout<<"Derived1 Constructor\n";
	}
	~Derived1()
	{
		cout<<"Derived1 Destructor\n";
	}
	
};

int main()
{
	Derived1 dobj;
	
	return 0;
}