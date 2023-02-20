#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n,w[100][100],d[100][100]={0};
	cout << "Enter the number of vertices:";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "Enter the weight of " << i << " " << j << ": ";
			cin >> w[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << w[i][j] << " ";
		}
		cout << endl;
	}
	cout<<endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=n ; j++)
		{
			if (w[i][j] == 0)
			{
				if (i != j)
				{
					d[i][j] = INT16_MAX / 2;
				}
			}
			else
			{
				d[i][j] = w[i][j];
			}
		}
	}
	for (int k = 1; k <= n; k++)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <=n; j++)
			{
				int x = d[i][j];
				int y = d[i][k] + d[k][j];
				d[i][j] = min(x, y);
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << d[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}