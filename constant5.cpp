#include<iostream>
using namespace std;

class Demo
{
	public :
		int i;
		const int j;  //constant characteristics
				
		Demo(int a, int b) :j(b)
		{
			i= a;
		}
		
		void fun()
		{
			cout<<"Inside fun\n";
			i++;
			//j++;  //Not allowed
		}
		// b is a constant input argument 
		void gun(int a, const int b) const //constant function/behaviour
		{
			int x =10; 
			const int y =20; //constant local variable
			
			cout<<"Inside gun\n";
			//i++;  //Not allowed
			//j++; //Not allowed
			  
			 x++;   //allowed
			//y++; //Not allowed
			
			a++;  //allowed
			//b++;  //not allowed
 		}
};

int main()
{
	Demo obj1(11,21);
	const Demo obj2(11,21);
	
	obj1.fun();
	obj1.gun(10,20);
	
	obj2.fun();
	obj2.gun(10,20);
	
	/*
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	
	obj.i++;
	//obj.j++; Not Allowed
	cout<<obj.i<<"\n";
	*/
	return 0;
}