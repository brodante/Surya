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
     lli N,temp,V,I,B,G,Y,O,R,sum;
     cin>>N;
     lli A[N];
     V=I=B=G=Y=O=R=0;
     //cout<<V<<I<<B<<G<<Y<<O<<R;
     foi(N)
     {
       cin>>A[i];
       if(A[i]==1)
       V=1;
       else if(A[i]==2)
       I=1;
       else if(A[i]==3)
       B=1;
       else if(A[i]==4)
       G=1;
       else if(A[i]==5)
       Y=1;
       else if(A[i]==6)
       G=1;
       else if(A[i]==7)
       Y=1;
         sum=V+I+B+G+Y+O+R;
         if(sum==7)
         {
           temp = i+1;
         }
     }
     cout<<temp<<'\n';
   }
 }
