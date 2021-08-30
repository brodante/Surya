/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<=n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
test(n)
{
  lli n,ne,nc,temp1,temp2,temp3;
  cin>>n>>ne>>nc>>temp1>>temp2>>temp3;
  lli chmax=min(ne,nc), com=100000000009999999;
  foi(chmax)
  {
    lli re,rch;
    lli F=0;
    if(i==n)
    F+=(i*temp3);
    else if(i<n)
    {
      F+=(i*temp3);
      rch=nc-i;
      re=ne-i;
      if(temp1<=temp2)
      {
        lli n0=re/2,nCM=rch/3;
        if(n0>=(n-i))
        F+=(n-i)*temp1;
        else
        {
        F+=(n0)*temp1;
          if(nCM+n0+i<n)
          F=100000000009999999;
          else
          F+=(n-i-n0)*temp2;
        }
      }
      else
      {
        lli n0=re/2,nCM=rch/3;
        if(nCM>=(n-i))
        F+=(n-1)*temp2;
        else
        {
          F+=(nCM)*temp2;
          if(nCM+n0+i<n)
          F=100000000009999999;
          else
          F+=(n-i-nCM)*temp1;
        }
      }
    }
    else
    break;
    if(F<com)
    com=F;
  }
  if(com!=100000000009999999)
  cout<<com<<'\n';
  else
  cout<<"-1\n";
}
}
