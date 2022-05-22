#include<iostream>
using namespace std;

class Demo
{
	public:
	
	//Addition@2ii
	int Addition(int no1, int no2)
	{
		int ans =0;
		ans = no1 + no2;
		return ans;
	}	
	
	//Addition@3iii
	int Addition(int no1, int no2,int no3)
	{
		int ans =0;
		ans = no1 + no2 +no3;
		return ans;
	}	
	
	//Addition@4iiii
	int Addition(int no1, int no2,int no3,int no4)
	{
		int ans =0;
		ans = no1 + no2 +no3+ no4;
		return ans;
	}	

};


int main()
{
	Demo obj;
	int ret= 0;
	
	//PUSH 10
	//PUSH 11
	//CALL 1000 //Assembly lang
	ret = obj.Addition(10,11); 	//Addition@2ii(10,11)
	cout<<ret<<"\n";
	
	//PUSH 10
	//PUSH 11
	//PUSH 21
	//CALL 2000
	ret = obj.Addition(10,11,21); 	//Addition@3iii(10,11,21)
	cout<<ret<<"\n";
	
	//PUSH 10
	//PUSH 11
	//PUSH 21
	//PUSH 51
	//CALL 3000
	ret = obj.Addition(10,11,21,51);	//Addition@4iiii(10,11,21,51)
	cout<<ret<<"\n";

	
	return 0;
}

/*
	//ALLOWED
	
	//changing number of arguments
		void fun(int,int);
		void fun(int,int,int);

	//changing datatype of argument
		void fun(int,int)
		void fun(double,double)
	
	//changing sequence of argument
		void fun(int,int,float)
		void fun(int,float,int)
	
	//NOT ALLOWED
	
	// changing return value
		int fun();





*\