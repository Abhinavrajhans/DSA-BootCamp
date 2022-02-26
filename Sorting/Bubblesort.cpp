#include<bits/stdc++.h>
using namespace std;
void swap(int i, int j, int arr[])
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
void Bubblesort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		bool is_swap = false;
		for (int j = 0; j < n - i - 1 ; j++)
		{
			if (arr[j] <= arr[j + 1])continue;
			swap(j, j + 1, arr);
			is_swap = true;
		}
		if (is_swap == false)break;
	}
}
int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)cin >> arr[i];
	cout << "array before sorting" << endl;
	for (int i = 0; i < n; i++)cout << arr[i] << " ";
	cout << endl;
	Bubblesort(arr, n);
	cout << "array before sorting" << endl;
	for (int i = 0; i < n; i++)cout << arr[i] << " ";
	cout << endl;
}
