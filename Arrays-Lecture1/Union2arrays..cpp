#include<bits/stdc++.h>
using namespace std;
int doUnion(int a[], int n, int b[], int m)  {
    int freq[100000];
    for(int i=0;i<100000;i++)freq[i]=0;
    for(int i=0;i<n;i++)freq[a[i]]=1;
    for(int i=0;i<m;i++)freq[b[i]]=1;  
    int ans=0;
    for(int i=1;i<100000;i++)if(freq[i]==1)ans+=1;
    return ans;
}
int main()
{
  int n,m;
  cin>>n>>m;
  int a[n],b[m];
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<m;i++)cin>>b[i];
  cout<<doUnion(a,n,b,m);
  return 0;
}
