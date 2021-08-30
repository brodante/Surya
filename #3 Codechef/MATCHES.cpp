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
  lli a,b,temp,x,ans=0;
  cin>>a>>b;
  temp=a+b;
  while(temp)
  {
    x=temp%10;
    temp/=10;
    switch (x)
    {
      case 0:ans+=6;
            break;
      case 1:ans+=2;
            break;
      case 2:ans+=5;
            break;
      case 3:ans+=5;
            break;
      case 4:ans+=4;
            break;
      case 5:ans+=5;
            break;
      case 6:ans+=6;
            break;
      case 7:ans+=3;
            break;
      case 8:ans+=7;
            break;
      case 9:ans+=6;
            break;
    }
  }
cout<<ans<<'\n';
}
}
