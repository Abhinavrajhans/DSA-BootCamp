#include<bits/stdc++.h>
using namespace std;
void swap(int i, int j, int arr[])
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
void sort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = arr[i];
		int idx = i;
		for (int j = i; j < n; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				idx = j;
			}
		}
		swap(i, idx, arr);
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
	sort(arr, n);
	cout << "array before sorting" << endl;
	for (int i = 0; i < n; i++)cout << arr[i] << " ";
	cout << endl;
}
