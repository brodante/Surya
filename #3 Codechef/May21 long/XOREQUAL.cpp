/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<=n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int XEQ(lli temp, lli temp2 )
{
  lli ans=1;
  temp%=MOD;
  if(temp==0)
    return 0;
  while(temp2>0)
  {
    if(temp2&1)
    {
      ans*=temp;
      ans%=MOD;
    }
      temp2>>=1;
      temp=(temp*temp)%MOD;
  }
    return ans;
}
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
test(t)
{
  lli n;
  cin>>n;
  cout<<XEQ(2,n-1)<<'\n';
}
}
