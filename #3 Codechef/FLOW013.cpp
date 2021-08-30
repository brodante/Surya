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
     int a,b,c;
     cin>>a>>b>>c;
     if(a+b+c==180 && a>0 && b>0 && c>0)
     cout<<"YES\n";
     else
     cout<<"NO\n";
   }
}
