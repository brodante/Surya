#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T,K,x;
  cin>>T;
  while(T--)
  {
    cin>>K;
    x=K;
  while(x)
  {
    for(int i=K-x;i>=1;i--)
      {
        cout<<'*';
      }
    for(int j=x;j>=1;j--)
    {
      cout<<j;
    }
    cout<<'\n';
    x--;
  }
}
}
