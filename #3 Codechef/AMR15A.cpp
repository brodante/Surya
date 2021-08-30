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
   int T;
   cin>>T;
  int A[T],temp=0;
  foi(T)
  {
    cin>>A[i];
    if(A[i]%2!=0)
    temp++;
  }
  if(temp<(T+1)/2)
  cout<<"READY FOR BATTLE \n";
  else
  cout<<"NOT READY\n";
}
