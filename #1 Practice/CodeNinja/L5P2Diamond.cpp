/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
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
  //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);

   int n,m,j;
   cin>>n;
   m=(n+1)/2;
   n/=2;
   for(int i=m;i>0;i--)
   {
     for(int j=1;j<i;j++)
      cout<<' ';
     for(j=0;j<=m-i;j++)
      cout<<'*';
     for(j=0;j<m-i;j++)
      cout<<'*';
     cout<<'\n';
   }
   for(int i=1;i<=n;i++)
   {
     for(int j=1;j<=i;j++)
      cout<<' ';
     for(int j=i;j<=n;j++)
      cout<<'*';
     for(int j=i;j<n;j++)
      cout<<'*';
    cout<<'\n';
   }
 }
