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
   test(n)
   {
      lli act,limit,ans=0,r;
      char origin[16];
      cin>>act>>origin;
      if(origin[0]=='I')
      limit=200;
      if(origin[0]=='N')
      limit=400;
      char a[16];
      foi(act)
      {
        cin>>a;
      if(a[8]=='W')
      {
        ans+=300;
        cin>>r;
        if(r<20)
          ans+=20-r;
      }
      else if(a[8]=='R')
        ans+=300;
      else if(a[0]=='B')
      {
        cin>>r;
        if(r>=50&&r<=1000)
        ans+=r;
      }
      if(a[8]=='H')
        ans+=50;
      }
   cout<<ans/limit<<'\n';
  }
}
