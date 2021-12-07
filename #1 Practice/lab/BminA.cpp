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
void bma( int a[], int b[])
{
  int flag=1,k=0,c[5];
  foi(5)
  {
    foj(5)
    {
      if(b[i]==a[j])
       {
         flag=0;
         break;
       }
     }
      if(flag)
       {
         c[k]=b[i];
         k++;
       }
     flag=1;
    }
foi(k)
 cout<<c[i]<<'\n';
}
//using namespace boost::multiprecision;
int main()
{
  //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);
   int a[5],b[5];
   foi(5)
    cin>>a[i];
   foi(5)
    cin>>b[i];
    bma(a,b);
  /*
   foi(5)
   {
     foj(5)
     {
       if(b[i]==a[j])
        {
          flag=0;
          break;
        }
      }
       if(flag)
        {
          c[k]=b[i];
          k++;
        }
      flag=1;
     }
foi(k)
  cout<<c[i]<<'\n';*/
 }
