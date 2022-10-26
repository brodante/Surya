/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
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
void r(vector<int> &v, int n) {
    if(n>1000)
        return;
    if(n)
    v.push_back(n);
    r(v,n*10+4);
    r(v,n*10+7);
}
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   vector<int> temp;
   r(temp,0);
   int k,f=0;
   cin>>k;
   for(auto j:temp)
       if(k%j==0)
       {
           f=1;cout<<"CURSED";
           break;
       }
   if(!f)
       cout<<"NOT CURSED";
   cout<<"\n";
}
