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
     lli D,d,P,Q,ans=0,temp,temp2;
     cin>>D>>d>>P>>Q;
     temp=D/d;
     temp2=D%d;
     if(temp2==0)
      ans=P*d*temp+(Q*d*(temp-1)*temp)/2;
     else
      ans=P*d*temp+(Q*d*(temp-1)*temp)/2+(P+temp*Q)*temp2;
     cout<<ans<<'\n';
   }
}
