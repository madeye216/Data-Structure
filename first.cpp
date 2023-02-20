#include<iostream>
using namespace std;
int pow(int a,int b)
{
	int p=1;
	for(int i=0;i<b;i++)
	{
		p=p*a;
	}
	return p;
}
int main()
{
	int a,b;
	cout<<"Enter the value of base:";
	cin>>a;
	cout<<"Enter the power:";
	cin>>b;
	cout<<"The answer is:"<<pow(a,b);
	return 0;
}