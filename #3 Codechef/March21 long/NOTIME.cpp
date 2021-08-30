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
int N,H,x,flag=0;
cin>>N>>H>>x;
int T[N];
foi(N)
{
cin>>T[i];
//cout<<H+T[i]<<endl;
if(x+T[i]>=H)
  {
    flag=1;
    cout<<"YES";
    break;
  }
}
if(flag==0)
cout<<"NO";
}
