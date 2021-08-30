#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    ll h,w,n,count=1;
    cin>>h>>w>>n;
    while(h%2==0)
    {
      count++;
      count*=2;
      h/=2;
    }
    while(w%2==0)
    {
      count++;
      count*=2;
      w/=2;
    }
    if(count>=n)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}
}
