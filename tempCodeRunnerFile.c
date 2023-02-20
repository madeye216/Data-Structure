#include <stdio.h>
void subset(int arr[], int n)
{
	for (int i = 0; i < (1 << n); i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i & (1 << j))
			{
				printf("%d ", arr[j]);
			}
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("Enter number of elements in set:");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements of set ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Elements of set are:");
	for (int i = 0; i < n; i++)
	{
		printf("%d    ", arr[i]);
	}
	printf("\n");
	printf("Power Set of given set is :\n");
	subset(arr, n);
	return 0;
}