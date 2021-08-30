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
lli flag=0;
using namespace std;
//using namespace boost::multiprecision;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   test(T)
   {
      lli n,k,count=0;
      cin>>n>>k;
      lli a[n],temp;
      foi(n)
        cin>>a[i];
      foi(n)
        {
          temp=0;
          while((a[i]==a[i+1]-1)&&i<n)
            {
              temp++;
              i++;
              if(temp>=k)
                  flag=1;
            }
            if(flag)
              {
                count++;
                flag=0;
              }
        }
      cout<<count<<'\n';
   }
 }
