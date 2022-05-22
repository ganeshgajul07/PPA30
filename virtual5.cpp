#include<iostream>
using namespace std;

class Base
{
	public :
		int x,y;
		
		virtual void fun()
		{
			cout<<"Base fun"<<"\n";
		}
		
		virtual void gun()
		{
			cout<<"Base gun"<<"\n";
		}
		
		void sun()
		{
			cout<<"Base sun"<<"\n";
		}
		
		virtual void run()
		{
			cout<<"Base run"<<"\n";
		}
};

class Derived : public Base
{
	public :
		int i,j;
		
		virtual void gun()
		{
			cout<<"Derived gun"<<"\n";
		}
		void fun()
		{
			cout<<"Derived fun"<<"\n";
		}
		void sun()
		{
			cout<<"Derived sun"<<"\n";
		}
		virtual void mun()
		{
			cout<<"Derived mun"<<"\n";
		}
		
};

int main()
{

	Base *bp = new Derived(); //Upcasting
	bp->fun(); //Derived fun
	bp->gun(); //Derived gun
	bp->sun(); //Base sun
	bp->run(); //Base run
	//bp->mun(); //Error

	
	cout<<"Size of Base :"<<sizeof(Base)<<"\n"; //12
	cout<<"Size of Derived :"<<sizeof(Derived)<<"\n"; //20
	
	return 0;
}