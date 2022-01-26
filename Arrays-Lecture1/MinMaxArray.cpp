#include<bits/stdc++.h>
using namespace std;
pair<long long int,long long int> give(long long int a[],int n)
{
   long long int min=1e18,max=0;
   for(int i=0;i<n;i++)
   {
     if(a[i]>max)max=a[i];
     if(a[i]<min)min=a[i];
   }
   pair<long long int,long long int> p;
   p.first=min;
   p.second=max;
   return p;
}
int main()
{
  int t;
  cin>>t;
  while(t--) {
     int n;
     cin>>n;
     long long int a[n];
     for(int i=0;i<n;i++)cin>>a[i];
     pair<long long int,long long int> p=give(a,n);
     cout<<p.first<<" "<<p.second;

  }
}
