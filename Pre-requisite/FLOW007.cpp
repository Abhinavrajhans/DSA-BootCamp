#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int m=0;
    while(n>0)
    {
      m=m*10+(n%10);
      n=n/10;
    }
    cout<<m<<endl;
  }
  return 0;
}
