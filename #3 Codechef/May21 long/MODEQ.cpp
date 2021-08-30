/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=2;i<=n;i++)
#define foj(n)  for(lli j=c;j<=n;j+=i)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   test(n)
   {
     lli a,b,temp=0;
     cin>>a>>b;
     vector<lli> v(a+1,1);
     foi(a)
     {
       lli c=b%i;
       temp+=v[c];
       foj(a)
        v[j]++;
     }
     cout<<temp<<'\n';
   }
}
