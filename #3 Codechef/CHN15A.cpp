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
  int N,K,temp=0;
  cin>>N>>K;
  int A[N];
  foi(N)
  {
    cin>>A[i];
    A[i]+=K;
    if(A[i]%7==0)
    temp++;
  }
cout<<temp<<'\n';
}
}
