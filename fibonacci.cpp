#include<iostream>
using namespace std;
int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}
int main()
{
	int n;
	cout<<"enter the terms in your series:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<" "<<fibo(i);
	}
	return 0;
}