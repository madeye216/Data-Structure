#include<iostream>
#include<bits/stdc++.h>
#define TRUE 0
#define FALSE 1
using namespace std;
int vertex_visit(vector<int>adj[],vector<int>&status,int i)
{
	int(status[1]==TRUE)
		return TRUE;
	status[i]=TRUE;
	int Flag=False;
	for(int j=0;j<adj[i].size();j++)
	{
		Flag=vertex_visit(adj,status,adj[i][j]);
		if(Flag==1)
		return TRUE;
	} 
	return FALSE;  
}
int cycle_dection(vector<int>adj[],int N)
{
	int check=FALSE;
	vector<int>status(N,0);
	for
}
