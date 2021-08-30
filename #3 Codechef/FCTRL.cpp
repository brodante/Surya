#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int T,N;
  cin>>T;
  while(T--)
  {
    cin>>N;
    long long int a=1,p=5,ans=0;
    while(a!=0)
    {
      a=N/p;
      p*=5;
      ans+=a;
    }
    cout<<ans<<'\n';
  }
}
