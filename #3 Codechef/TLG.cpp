/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   lli N,M,p=0,temp,total1=0,total2=0,ans;
test(n)
{
cin>>N>>M;
total1+=N;
total2+=M;
temp=abs(total1-total2);
if(temp>p)
{
  p=temp;
  if(total1>total2)
  ans=1;
  else
  ans=2;
}
}
cout<<ans<<' '<<p<<'\n';
}
