#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"The number:";
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		cout<<""<<n<<" X "<<""<<i<<" = "<<""<<n*i;
		cout<<endl;
	}
	return 0;
}