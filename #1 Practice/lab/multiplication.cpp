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
  //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);
   int a[2][3],b[3][2],temp=0;
   foi(2)
    foj(3)
      cin>>a[i][j];
   foi(3)
    foj(2)
      cin>>b[i][j];
foi(2)
  {
    foj(2)
      {
        for(int k=0;k<3;k++)
          {
            temp+=(a[i][j]*b[j][i]);
          }
        cout<<temp<<" | ";
        temp=0;
      }
    cout<<'\n';
  }
 }
