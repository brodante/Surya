/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=1;j<n-1;j--)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
test(n)
{
  lli n,x,y,z;
  cin>>n;
  int A[n];
  foi(n)
  {
    cin>>A[i];
  }
  sort(A,A+n);
  x=A[0];
  y=A[1];
  z=A[n-1];
  cout<<abs(x-y)+abs(z-x)+abs(y-z)<<'\n';
  }
}
