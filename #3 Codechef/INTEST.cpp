#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
  int n,k,s=0,t;
  cin>>n;
  cin>>k;
  while(n!=0)
    {
      cin>>t;
      if(t%k==0)
        s++;
      n--;
    }
  cout<<s;
}
