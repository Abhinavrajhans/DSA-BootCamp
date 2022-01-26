
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;                                                 //t is for Test-Cases
  while(t--) {
     int n;
     cin>>n;                                              //taking n the size of the array as input.
     long long int a[n];                                 //making a array which takes values of type long long int.
     for(int i=n-1;i>=0;i--) cin>>a[i];                  //Main logic written below.
     for(int i=0;i<n;i++)cout<<a[i]<<" ";                //printing the array
     cout<<endl;
  }
}

/*
Main Logic : the Logic we are using is we are placing the ith element of the array at position n-1-i or in simple words 
we are placing the elements from behind . and printing the element from front.
*/

