/*Code by rubb3rducky*/
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pb push_back
#define eb emplace_back
#define pi 3.14159265358979323846
#define MOD 1000000007
#define unbuffer cin.clear(); cin.sync();
#define foi(n)  for(lli i=1;i<=n;i++)
#define foj(n)  for(lli j=1;j<=n;j++)
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
     int n;
     cin>>n;
     string a,b;
     cin>>a;
     b=a;
     reverse(a.begin(),a.end());
   vector<vector<int>>c(n+1,vector<int>(n+1,0));
     foi(n)
      foj(n)
         {
             if(a[j-1]!=b[i-1])
              c[i][j]=max(c[i][j-1], c[i-1][j]);
             else
              c[i][j]=c[i-1][j-1]+1;
         }
     cout<<c[n][n]/2<<'\n';
   }
 }
