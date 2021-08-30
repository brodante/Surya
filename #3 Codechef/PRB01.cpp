/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=2;i<n;i++)
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
     lli a,flag=0;
     cin>>a;
     if(a==1)
     cout<<"no\n";
     else
     {
       foi(a)
       {
         if(a%i==0)
         flag=1;
       }
       if(flag==1)
       cout<<"no\n";
       else
       cout<<"yes\n";
     }
   }
 }
