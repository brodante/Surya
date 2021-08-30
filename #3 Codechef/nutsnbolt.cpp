/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   char def[9]={'!','#','$','%','&','*','@','^','~'};
  int flag[9]={0,0,0,0,0,0,0,0,0};
  for( int i=0;i<n;i++)
  {
      for(int j=0;j<9;j++)
      {
          if(nuts[i]==def[j])
          {
              flag[j]=1;
          }
      }
  }
  int j=0;
  for(int i=0;i<9;i++)
  {
      if(flag[i]==1)
      {
          nuts[j]=bolts[j]=def[i];
          j++;
      }
  }
 }
