#include<bits/stdc++.h>
using namespace std;
void conquer(int a[], int start, int mid, int end)
{
	int merged[end - start + 1];
	int i = start;
	int j = mid + 1;
	int k = 0;
	while (i <= mid && j <= end)
	{
		if (a[i] <= a[j])
		{
			merged[k] = a[i];
			k++;
			i++;
		}
		else
		{
			merged[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		merged[k] = a[i];
		k++;
		i++;
	}
	while (j <= end)
	{
		merged[k] = a[j];
		k++;
		j++;
	}
	for (int i = 0, j = start; i < end - start + 1; i++, j++)
	{
		a[j] = merged[i];
	}

}
void divide(int a[], int start , int end)
{
	if (start == end)return;
	int mid = start + (end - start) / 2;
	divide(a, start, mid);
	divide(a, mid + 1, end);
	conquer(a, start, mid, end);
}
int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)cin >> a[i];
	cout << "The Array Before Sorting was:" << endl;
	for (int i = 0; i < n; i++)cout << a[i] << " ";
	cout << endl;
	divide(a, 0, n - 1);
	cout << "The Array After Sorting is:" << endl;
	for (int i = 0; i < n; i++)cout << a[i] << " ";
	cout << endl;

}
