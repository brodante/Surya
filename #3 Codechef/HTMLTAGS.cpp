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
      int temp,flag=0;
      cin>>h;
      temp=h.length()-1;
      if(h[0]=='<'&&h[1]=='/'&&h[temp]=='>')
      {
        for(int i=2;i<temp-1;i++)
            if((h[i]<'a'||h[i]>'z')||(h[i]<'0'||h[i]>'9'))
            //if(h[i]>=33&&h[i]<=126&&h[i]!=' ')
              flag=1;
        if(!(flag))
          cout<<"Success\n";
      }
      else if(flag)
        cout<<"Error\n";
      else
        cout<<"Error\n";
   }
 }
