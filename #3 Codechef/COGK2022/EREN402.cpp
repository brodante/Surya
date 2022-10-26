/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pb pussh_back
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
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
     string s;
   cin>>s;
   int n=s.size();
   vector<int> e,ep,o,op;
   for(int i=0;i<n;i++)
   {
       int t=s[i]-'0';
       if(t%2==0)
       {
           e.eb(t);
           ep.eb(i);
       }
       else
       {
           o.eb(t);
           op.eb(i);
       }
   }
   sort(e.begin(),e.end(),greater<int>());
   sort(o.begin(),o.end(),greater<int>());
   n=ep.size();
   foi(n)
       s[ep[i]]=(char)(e[i]+'0');
   n=op.size();
   foi(n)
       s[op[i]]=(char)(o[i]+'0');
   cout<<s;
   cout<<"\n";
 }
