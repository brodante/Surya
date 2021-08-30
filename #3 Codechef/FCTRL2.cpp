#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,f=1;
  cin>>t;
  while(t!=0)
  {
  cin>>n;
  while(n!=0)
    {
      f*=n;
      n--;
    }
    cout<<f<<'\n';
    f=1;
  t--;
  }
}
