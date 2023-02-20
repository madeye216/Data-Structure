#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n][n] = {0};
	for (int i = 1; i <= n; i++)
	{
		for (int j=1; j <= n; j++)
		{
			cout << "Enter the value of " << i << " " << j << " :";
			cin >> a[i][j];
		}
	}
	// int size = (n * (n - 1)) / 2;
	// int sparse[size];
	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < n; j++)
	// 	{
	// 		if (a[i][j] != 0)
	// 		{
	// 			int l = ((i * (i - 1)) / 2) + j;
	// 			sparse[l] = a[i][j];
	// 		}
	// 	}
	// }
	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j=0; j < n; j++)
	// 	{
	// 		cout<< a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// for (int i = 0; i < size; i++)
	// {
	// 	cout << sparse[i] << " ";
	// }
	int size =(3*n)-2;
	int sparse[size+1];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] != 0)
			{
				int l = (2*i)+j-2;
				sparse[l] = a[i][j];
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j=1; j <= n; j++)
		{
			cout<< a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"The sixe of spares matrix is :"<<size;
	cout<<endl;
	for (int i = 1; i <= size; i++)
	{
		cout << sparse[i] << " ";
	}
	return 0;
}