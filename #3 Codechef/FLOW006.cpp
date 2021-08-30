#include <bits/stdc++.h>
#define lli long long
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
     lli N,sum=0;
    cin>>N;
    while(N)
    {
      sum+=N%10;
      N/=10;
    }
    cout<<sum<<'\n';
  }
}
