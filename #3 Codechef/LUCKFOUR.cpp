#include <bits/stdc++.h>
#define lli long long
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
test(n)
{
  lli a,ans=0;
  cin>>a;
  while(a)
  {
    if(a%10==4)
    ans++;
    a/=10;
  }
  cout<<ans<<'\n';
}
}
