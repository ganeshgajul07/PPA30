#include<iostream>
using namespace std;

int main()
{
	enum Marvellous_Batch{PPA=0,LB=1,Python=2,LSP=3,MERN=4}
	const int Fees[]={15000,16000,17000,18000,19000};
	const float Duration[]={3.5,3.5,4.5,5.5,6.6};
	int choice = 0;
	
	cout<<"Select the batch that you want to join?\n";
	cout<<"0 : PPA\n";
	cout<<"1 : Logic Building\n";
	cout<<"2 : Python\n";
	cout<<"3 : LSP\n";
	cout<<"4 : MERN\n";
	
	cin>>choice;
	
	switch(choice)
	{
		case PPA:
			cout<<"Thanks you for selecting Pre-plaecement Activity Batch\n";
			cout<<"Duration is :"<<Duration[PPA]<<"\n";
			cout<<"Fees are :"<<Fees[PPA]<<"\n";
			break;
			
		case LB:
			cout<<"Thanks you for selecting Logic Building Batch\n";
			cout<<"Duration is :"<<Duration[LB]<<"\n";
			cout<<"Fee are :"<<Fees[LB]<<"\n";
			break;
	
		case Python:
			cout<<"Thanks you for selecting Logic Building Batch\n";
			cout<<"Duration is :"<<Duration[Python]<<"\n";
			cout<<"Fees are :"<<Fees[Python]<<"\n";
			break;
	
		case LSP:
			cout<<"Thanks you for selecting Linux System Programming Batch\n";
			cout<<"Duration is :"<<Duration[LSP]<<"\n";
			cout<<"Fees are :"<<Fees[LSP]<<"\n";
			break;
	
		case MERN:
			cout<<"Thanks you for selecting MERN Stack Batch\n";
			cout<<"Duration is :"<<Duration[MERN]<<"\n";
			cout<<"Fees are :"<<Fees[MERN]<<"\n";
			break;
	
		default :
			cout<<"Sorry there is no such batch\n";
			cout<<"Contact Admin :8623839966\n";
			break;

	cout<<"Thanks for visiting Marvellous Infosystem\n";
	cout<<"Have a nice day\n";
	}
	
	return 0;
}