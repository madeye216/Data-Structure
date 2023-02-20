#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<pair<int,int>>v;
	v.push_back(make_pair(1234,98));
	v.push_back(make_pair(1235,95));
	v.push_back(make_pair(1236,96));
	v.push_back(make_pair(1237,97));
	v.push_back(make_pair(1237,97));
	for(int j=0;j<v.size();j++)
	{
		cout<<v[j].first;
		cout<<" "<<v[j].second<<endl;
	}
	cout<<"The size of is: "<<v.capacity();
	return 0;
}