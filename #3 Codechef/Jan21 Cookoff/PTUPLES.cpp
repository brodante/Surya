#include <bits/stdc++.h>
#define lli long long
#define foi(n)  for(lli i=1;i<=n;i++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
lli PRIME[1000001];
lli F[1000001];
void seive()
{
lli MaxN=1000000;
  foi(MaxN)
  {PRIME[i]=1; F[i]=0;}
  PRIME[0]=PRIME[1]=0;
  for(int i=2;i*i<=MaxN;i++)
  {
    if(PRIME[i])
    {
      for(int j=i*i;j<=MaxN;j+=i)
      PRIME[j]=0;
    }
  }
  lli temp=0;
  for(int i=2;i<MaxN;i++)
  {
    if(PRIME[2+i]==1&&PRIME[i]==1)
    {
      F[i+2]=temp;
      temp++;
    }
    else
    {
      F[i+2]=temp;
    }
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   seive();
test(n)
{
lli MaxN;
cin>>MaxN;
cout<<F[MaxN]<<'\n';
}
}
