#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--) {
    int quantity,price;
    cin>>quantity>>price;
    double total_price=(price*quantity);
    double dis=0;
    if(quantity>1000)dis=total_price/10;
    total_price-=dis;
    printf("%f\n",total_price);
  }
  return 0;
}
