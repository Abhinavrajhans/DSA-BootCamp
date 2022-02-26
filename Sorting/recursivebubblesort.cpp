#include<bits/stdc++.h>
using namespace std;
void swap(int i, int j, int arr[])
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
bool rec(int arr[], int i, int last, bool is_swap)
{
	if (i >= last) return is_swap;
	if (arr[i] > arr[i + 1]) {
		swap(i, i + 1, arr);
		is_swap = true;
	}
	return is_swap | rec(arr, i + 1, last, is_swap);
}
void Bubblesort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		bool is_swap = rec(arr, 0, n - i - 1, false);
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
