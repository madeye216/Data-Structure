#include<iostream>
using namespace std;
void ifibo(long n)
{
	long a=0,b=1;
	long c;
	for(int i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		if(c==n)
		{
			int f=1;
		}
	}
	if(f==1)
	{
		cout<<"IsFibo";
	}
	else
	{
		cout<<"NotFibo"
	}
}
int main()
{
	long n;
	cin>>n;
}