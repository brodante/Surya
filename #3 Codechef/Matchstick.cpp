/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=4;i>=1;i--)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   lli N,flag=0,temp;
   cin>>N;
   if(N%5==0)
   cout<<"-1";
   else
   foi(4)
   {
     temp=N-i;
     if(temp%5==0)
     {
       cout<<i;
       break;
     }
   }
 }
