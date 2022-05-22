#include<iostream>

using namespace std;

class Demo
{
	public:
		int x; 		//characteristics
		int y;		//characteristics
		
		Demo()		//Default
		{
			cout<<"Inside Default constructor\n";
			x =0;
			y= 0;
		}
		
		Demo(int i, int j) 	//parametrised cosntructor
		{
			cout<<"Inside Parametrised constructor\n";
			x = i;
			y = j;
			
		}
		
		Demo(Demo &ref)		//copy constructor
		{
			cout<<"Inside copy constructor\n";
			x = ref.x;
			y = ref.y;
		}
	
		~Demo()
		{
			cout<<"Inside Destructor\n";
		}
};

int main()
{
	// cout<<"Inside main\n";
	Demo obj1(11,21);
	
	Demo obj2(obj1);
	return 0;
}