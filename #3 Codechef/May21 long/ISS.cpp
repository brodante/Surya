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
   lli arr[1000000];
   foj(1000000)
   arr[j]=((j+1)*(j+1));

   test(n)
   {
     lli a,ans=0;
     cin>>a;
     foi(a)
     {
       ans+=solve((a+arr[i-1]),a+arr[i]);
     }
     cout<<ans%MOD<<'\n';
   }
}
