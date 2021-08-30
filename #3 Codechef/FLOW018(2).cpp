#include <bits/stdc++.h>
#define lli long long
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   test(n)
   {
     int k;
     cin>>k;
     cout<<factorial(k)<<'\n';
   }
}
