/*Code by rubb3rducky*/
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pb push_back
#define eb emplace_back
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
  int a,b,c;
  cin>>a>>b>>c;
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int ans=0,temp=0,temp2=0,x=1;
   while(a!=0||b!=0||c!=0)
    {
      temp=a%10+b%10+c%10+temp2;
      temp2=temp/10;
      temp%=10;
      ans+=temp*x;
      x*=10;
      a/=10;
      b/=10;
      c/=10;
    }
    if(temp2)
        ans+=temp2*x;
    return ans;
 }
