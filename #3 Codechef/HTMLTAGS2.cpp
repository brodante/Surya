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
      string h;
      cin>>h;
      int temp=h.length(),flag=0;
      if(temp>3)
      {
        flag=(h[0]=='<'&&h[1]=='/'&&h[temp-1]=='>');
        loop(i,2,temp-2)
          if(!(islower(h[i])||isdigit(h[i])))
            flag=0;
      }
      if(flag)
        cout<<"Success\n";
      else
        cout<<"Error\n";
   }
 }
