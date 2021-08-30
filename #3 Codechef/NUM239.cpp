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
   test(n)
   {
      lli L,R,ans=0,temp;
      cin>>L>>R;
      loop(i,L,R)
      {
        temp=i%10;
        if(temp==2||temp==3||temp==9)
          ans++;
      }
      cout<<ans<<'\n';
      //temp=R;
      /*while(temp/=10)
        countR++;
      temp=L;
      while(temp/=10)
        countL++;
      for(int i=0;i<=countL-countR;i++)
      {
        ans+=3;
      }*/
      //cout<<countR<<" XXX \n";
/*
      countL=L%10;
      countR=R%10;
      if(countL==2)
        ans++;
      if(countL==3)
       ans++;
      if(countL==9)
       ans++;

      if(countR==2)
        ans++;
      if(countR==3)
        ans++;
      if(countR==9)
        ans++;
*/
      //cout<<ans<<'\n';
   }
 }
