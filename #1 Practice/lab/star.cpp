/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define unbuffer cin.clear(); cin.sync();
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
//using namespace boost::multiprecision;
int main()
{
  ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);

   int n=6,temp=1;

/*---------X------------X-----------X-----------X----------X----------X--------X---------*/

   for(int i=0;i<3;i++)
    {
      for(int j=i;j<3;j++)
        cout<<" ";
      for(int j=0;j<i;j++)
        cout<<"*";
      if(temp%n==1)
        cout<<"*";
      else
        cout<<" ";
      for(int j=0;j<i;j++)
        cout<<"*";
      cout<<"\n";
      temp++;
    }

/*---------X------------X-----------X-----------X----------X----------X--------X---------*/

for(int i=1;i<=n+1;i++)
{
  if(i%n==1)
    cout<<"*";
  else
    cout<<" ";
}

cout<<"\n";
temp++;
/*---------X------------X-----------X-----------X----------X----------X--------X---------*/

for(int i=0;i<3;i++)
 {
   for(int j=0;j<=i;j++)
     cout<<" ";
   for(int j=0;j<2-i;j++)
     cout<<"*";
   if((temp+1)%n==1)
     cout<<"*";
   else
     cout<<" ";
   for(int j=0;j<2-i;j++)
     cout<<"*";
   cout<<"\n";
   temp++;
 }
}
