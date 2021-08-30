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
lli gcd(lli a, lli b)
{
  if(b==0)
    return a;
  return gcd(b,a%b);
}
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   test(n)
   {
      lli A,B;
      cin>>A>>B;
      cout<<gcd(A,B)<<' '<<A*B/gcd(A,B)<<'\n'; //a*b = lcm * hcf .'. lcm = a*b/hcf
   }
 }
