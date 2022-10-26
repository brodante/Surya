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

  int basic;
  char grade;
  double hra,df,pf,ans;

  cin>>basic>>grade;
  hra=(.20)*basic;
  df=(.50)*basic;
  pf=(.11)*basic;
  ans=basic+hra+df-pf;
  if(grade=='A')
    ans+=1700;
  else if(grade=='B')
    ans+=1500;
  else
    ans+=1300;
  cout<<round(ans);
}
