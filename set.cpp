#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int>s;
	s.insert(2);
	s.insert(3);
	s.insert(0);
	s.insert(1);
	s.insert(10);
	s.insert(23);
	s.erase(23);
	set<int>::iterator it; //to print from the certain point;
	it=s.find(2);
	for (it;it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	// set<int,greater<int>>Ds;    //For displying the set in decending order
	// Ds.insert(2);
	// Ds.insert(3);
	// Ds.insert(0);
	// Ds.insert(1);
	// // s.erase(3);
	// for (auto i:Ds)
	// {
	// 	cout<<i<<" ";
	// }
	return 0;
}