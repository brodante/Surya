/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define temp char(3)
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<i+1;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
int main()
{
  // 73 76 89 3 = I L Y ♥
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  for(int i=1;i<=3;i++)
  {
    for(int j=3-i;j>0;j--)
      cout<<' ';
    for(int j=1;j<i+2;j++)
      cout<<temp;
    for(int j=1;j<i+2;j++)
      cout<<temp;
    for(int j=3-i;j>0;j--)
      cout<<' ';
    cout<<' ';
    for(int j=3-i;j>0;j--)
      cout<<' ';
    for(int j=1;j<i+2;j++)
      cout<<temp;
    for(int j=1;j<i+2;j++)
      cout<<temp;
    for(int j=3-i;j>0;j--)
      cout<<' ';
    cout<<'\n';
  }
  for(int i=1;i<=9;i++)
  {
    for(int j=1;j<=i;j++)
      cout<<' ';
    for(int j=1;j<=17-(2*i);j++)
      cout<<temp;
    cout<<'\n';
  }
}
