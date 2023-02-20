#include<iostream>
using namespace std;
int factorial(int n)
{
	int s=1;
	for(int i=n;i>0;i--)
	{
		s=s*i;
	}
	return s;
}
int main()
{
	int n,r,nCr;
	float sum=1;
	cin>>n;
	cin>>r;
	nCr=factorial(n)/(factorial(r)*factorial(n-r));
	for(int i=0;i<r;i++)
	{
		 sum=sum*(((n-i)*1.00)/(r-i));
	}cout<<nCr<<endl<<sum;

}