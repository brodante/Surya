/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=1;i<=2*a;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
lli solve(lli a, lli b)
{
  if(b==0)
    return a;
  return solve(b,a%b);
}
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   lli arr[1000001];
   for(lli i=0;i<1000001;i++)
   arr[i]=(i*i);
   test(n)
   {
     lli a,ans=0;
     cin>>a;
     for(lli x=1;x<=((2*a)+1);x++)
     {
       ans+=solve((a+arr[x]),(a+arr[x+1]));
     }
     cout<<ans%MOD<<'\n';
   }
}
