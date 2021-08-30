#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
test(T)
{
  int N,count=0;
  cin>>N;
    count+=N/100;
    N%=100;
    count+=N/50;
    N%=50;
    count+=N/10;
    N%=10;
    count+=N/5;
    N%=5;
    count+=N/2;
    N%=2;
    count+=N;
  cout<<count<<'\n';
}
}
