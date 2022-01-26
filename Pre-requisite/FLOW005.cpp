#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int currency[]={1,2,5,10,50,100};
  while(t--) {
    int n;
    cin>>n;
    int total=0;
    for(int i=5;i>=0;i--)
    {
       int max_times=(n/currency[i]);
       n=n-(max_times*currency[i]);
       total+=max_times;
    }
    cout<<total<<endl;
  }
  return 0;
}
