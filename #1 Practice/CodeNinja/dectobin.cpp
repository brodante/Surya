/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
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
  //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);

   lli n,c=0,temp=0,ans=0;
   cin>>n;
   if(!n)
    cout<<"0\n";
   else
   {
     while(n%2!=1)
     {
       c++;
       n/=2;
     }
     while(n!=0)
      {
        ans+=n%2;
        n/=2;
        ans*=10;
      }
      ans/=10;
      while(ans!=0)
        {
          temp+=ans%10;
          ans/=10;
          temp*=10;
        }
        temp/=10;
        //temp*=pow(10,c);
        while(c--)
            temp*=10;
      cout<<temp;
    }
}
