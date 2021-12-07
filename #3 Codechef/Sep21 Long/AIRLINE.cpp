/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
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
      int a[3],b,c,flag=0;
      cin>>a[0]>>a[1]>>a[2]>>b>>c;
      sort(a,a+3);
      //cout<<a[2];
      if(a[2]<=c)
          flag=(a[0]+a[1]<=b?1:0);
      else if(a[1]<=c)
          flag=(a[0]+a[2]<=b?1:0);
      else if(a[0]<=c)
          flag=(a[1]+a[2]<=b?1:0);

      if(flag)
        cout<<"YES\n";
      else
        cout<<"NO\n";
   }
 }
