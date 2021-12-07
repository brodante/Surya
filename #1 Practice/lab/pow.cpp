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
   lli n;
   cin>>n;
   int a[n];
   foi(n)
    cin>>a[i];
   cout<<"{ ";
   foi(n)
    cout<<a[i]<<", ";
   cout<<"}, ";
   cout<<char(232)<<", ";
for(lli k=0;k<n;k++)
  {
   for(int i=0;i<n;i++)
    {
      cout<<"{ "<<a[i]<<"}, {"<<a[i];
      for(int j=0;j<n-i;j++)
        {
          if(a[j]!=a[i])
            cout<<", "<<a[j];
        }
      cout<<"} ";
    }
  }
 }
