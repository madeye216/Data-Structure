#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v[5];
	v[0].push_back(1);
	v[0].push_back(2);
	v[0].push_back(3);
	v[1].push_back(4);
	v[1].push_back(6);
	v[2].push_back(7);
	v[2].push_back(8);
	v[2].push_back(9);
	v[2].push_back(11);
	v[3].push_back(34);
	v[3].push_back(14);
	v[3].push_back(13);
	v[4].push_back(5);
	v[4].push_back(5);
	v[4].push_back(5);
	v[4].push_back(5);
	v[4].push_back(5);
	for(int i=0;i<5;i++)
	{   cout<<i<<" :";c
		for(int j=0;j<v[i].size();j++)
		{
			cout<<" "<<v[i][j];
		}
		cout<<endl;
	}
return 0;
}