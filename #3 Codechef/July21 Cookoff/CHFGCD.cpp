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
int iseven(int a)
{
  if(a&1)
   return 0;
  return 1;
}
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   test(T)
   {
      lli x,y,temp,temp1;
      cin>>x>>y;
      if(__gcd(x,y)>1)
        cout<<"0\n";
      else if(__gcd(x+1,y)>1||__gcd(x,y+1)>1)
        cout<<"1\n";
      else
        cout<<"2\n";
      /*
      temp=(x<y?x:y);
      temp1=(x>y?x:y);
      x=temp;
      y=temp1;
      if(iseven(x)&&iseven(y))
        cout<<"0\n";
      else
        {
          if(!(iseven(x)&&iseven(y)))
            {
              while(x!=y)
              if(__gcd(x,y)>1)
                cout<<"0\n";
              else
              {

              }
            }
        }*/
   }
 }
