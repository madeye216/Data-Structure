#include<iostream>
using namespace std;
int main()

{
	char s[3];
	cin>>s;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				if(s[i]!=s[j]&& s[j]!=s[k]&&s[k]!=s[i])
				{
					cout<<s[i]<<s[j]<<s[k]<<endl;
				}
			}
		}
	}
}