#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int v,e,a,b,c[10][10]={0},d[10][10]={0};
	cout<<"How many vertices are there in the graph:";
	cin>>v;
	cout<<"How many edges are there in the graph:";
	cin>>e;
	vector<int>AdjList[v];
	for(int i=1;i<=e;i++)
	{
		cout<<"Enter the end point of edge "<<i<<":";
		cin>>a>>b;
		AdjList[a].push_back(b);
		AdjList[b].push_back(a);
		c[a][b]=1;
		c[b][a]=1;
		d[a][i-1]=1;
		d[b][i-1]=1;
	}
	for(int i=0;i<v;i++)
	{
		cout<<""<<i<<": ";
		for(int j=0;j<AdjList[i].size();j++)
		{
			cout<<" "<<AdjList[i][j]<<",";
		}
		cout<<endl;
	}
	for(int i=0;i<v;i++)
	{
		cout<<"The degree of "<<i<<"is "<<" "<<AdjList[i].size()<<endl;
	}
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<e;j++)
		{
			cout<<" "<<d[i][j];
		}
		cout<<endl;
	}
}