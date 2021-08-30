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
int N;
cin>>N;
int A[N],B[N],sum1=0,sum2=0;
foi(N)
  cin>>A[i];
foj(N)
  cin>>B[j];
sort(A,A+N);
sort(B,B+N);
foi(N-1)
{
  sum1+=A[i];
  sum2+=B[i];
}
if(sum1<sum2)
cout<<"Alice\n";
else if(sum2<sum1)
cout<<"Bob\n";
else
cout<<"Draw\n";
}
}
