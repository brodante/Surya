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
lli x,y;
cin>>x>>y;
lli a[x],b[x],ans=1e6;
foi(x)
  cin>>a[i]>>b[i];
lli c[x],d[x],e[x],f[x];
foi(y)
  cin>>c[i]>>d[i]>>e[i]>>f[i];
foi(y)
{
if(e[i]<c[i])
{
  swap(d[i],f[i]);
  swap(c[i],e[i]);
}
if(i%2==1)
cout<<(ans+1-c[i])<<" "<<(ans-d[i])<<'\n';
else
cout<<-c[i]<<" "<<-d[i]-1<<'\n';
}
}
