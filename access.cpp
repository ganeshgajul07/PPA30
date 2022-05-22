#include<iostream>
using namespace std;

//public
class Demo
{
		int i;
	public :
		int x;
		
	private :
		int y;
	
	public :
		Demo()
		{
			x = 10;
			y = 20;
			i = 30;
		}
		
		void fun()
		{
			cout<<"Inside public fun\n";
			cout<<y<<"\n";  //Allowed as it is member of class
			gun();
		}
		
		private :
			void gun()
			{
				cout<<"Inside private gun\n";
				cout<<y<<"\n"; //Allowed
			}
};

int main()
{
	Demo obj;
	
	cout<<obj.x<<"\n"; //ALLOWED
	//cout<<obj.y<<"\n"; // NOT ALLOWED error defined as private
	//cout<<obj.i<<"\n"; // NOT ALLOWED error defined as private
	
	obj.fun();  //ALLOWED
	// obj.gun(); // NOT ALLOWED error defined as private
	
	return 0;
}