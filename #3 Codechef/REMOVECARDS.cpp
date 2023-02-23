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
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   test(T)
   {
      int n,temp=0;
      cin>>n;
      int a[n];
      foi(n)
        cin>>a[i];
      sort(a,a+n);
      int b[(a[n-1]+1)];
      foi((a[n-1]+1))
        b[i]=0;
      foi(n)
        b[a[i]]++;
      foi(a[n-1]+1)
        temp=max(temp,b[i]);
      cout<<n-temp<<'\n';
   }
 }
