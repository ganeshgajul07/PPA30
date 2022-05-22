#include<iostream>
using namespace std;

class Demo
{
	public :
		int x;
		int y;
		
		Demo(int i =0, int j=0)
		{
			x = i;
			y =j;
		}	
};

bool operator == (Demo op1,Demo op2)
{
	if((op1.x ==op2.x) && (op1.y == op2.y))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator >(Demo op1,Demo op2)
{
	if((op1.x > op2.x) && (op1.y > op2.y))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Demo obj1(11,21);
	Demo obj2(51,101);
	
	//Demo obj1(11,21);
	//Demo obj2(11,21);
	
	if( obj1 > obj2) //>(obj1,obj2)
	{
		cout<<"object is greater\n";
	}
	else 
	{
		cout<<"object are smaller\n";
	}

	/*if( obj1 == obj2) //==(obj1,obj2)
	{
		cout<<"object are same\n";
	}
	else 
	{
		cout<<"object are different\n";
	}
	*/
	
	return 0;
}