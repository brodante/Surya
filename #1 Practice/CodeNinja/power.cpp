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

lli n,m,temp;
cin>>n>>m;
    temp=n;
    if(n==0)
      {
        if(m==0)
          cout<<"1";
        else
          cout<<"0";
      }
      else
      {
        if(m==0)
          cout<<"1";
        else
        {
            while(--m)
          		n*=temp;
        	cout<<n;
        }
        }
    return 0;
 }
