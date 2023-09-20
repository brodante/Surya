/*Code by rubb3rducky*/
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pb push_back
#define eb emplace_back
#define pi 3.14159265358979323846
#define MOD 1000000007
#define unbuffer cin.clear(); cin.sync();
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
//using namespace boost::multiprecision;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   test(T)
   {
     int n,m;
     cin>>n>>m;
     string s,k;
     cin>>s>>k;
     vector<int> a(n),b(m);
     foi(n)
      a[i]=s[i]-'0';
     foi(m)
     b[i]=k[i]-'0';
     int ans=INT_MAX;
     foi(n-m+1)
     {
         int curr=0;
         foj(m)
         {
             int diff=abs(a[i+j]-b[j]);
             curr+=min(diff,10-diff);
         }
         ans=min(ans,curr);
     }
     cout<<ans<<'\n';
   }
 }
