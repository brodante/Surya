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
      int n,flagI=0,flagF2=0,flagF1=0;
      cin>>n;
      char a[n];
      foi(n)
      {
        cin>>a[i];
        if(a[i]=='I')
          flagI=1;
        else if(a[i]=='N')
          flagF1=1;
        else if(a[i]=='Y')
          flagF2=1;
      }
      if(flagI)
        cout<<"INDIAN\n";
      else if(flagF2)
        cout<<"NOT INDIAN\n";
      else
        cout<<"NOT SURE\n";
   }
 }
