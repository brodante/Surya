/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   test(n)
   {
     lli n;
     cin>>n;
     lli ans=(n/4)*44;
     int rem=(n%4);
     if(n>=4)
     {
       if(rem==0)
       ans+=16;
       else if(rem==1)
       ans+=32;
       else if(rem==2)
       ans+=44;
       else if(rem==3)
       ans+=55;
       cout<<ans<<'\n';
     }
     else
     {

       if(n==1)
       cout<<"20"<<'\n';
       else if(n==2)
       cout<<"36"<<'\n';
       else if(n==3)
       cout<<"51"<<'\n';
     //else if(n==4)
     //cout<<"60";
    /* else
     {
      lli rem=n%4;
      lli ans=(n/4)*44;
      if(rem==0)
      ans+=16;
      else if(rem==1)
      ans+=32;
      else if(rem==2)
      ans+=44;
      else if(rem==3)
      ans+=55;
      */
      //cout<<ans<<'\n';
     }
   }
}
