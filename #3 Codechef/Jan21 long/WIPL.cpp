#include<bits/stdc++.h>
#define lli long long int
using namespace std;
void cpl()
{
    lli n,k;
    cin>>n>>k;
    if(n==1)
    {
      cout<<"-1\n";
      return;
    }
    lli a[n];
    for(lli i=0;i<n;i++)
        cin>>a[i];
    lli height1=k,height2=k;
    lli ans=2;
    sort(a,a+n);
    height1-=a[n-1];
    height2-=a[n-2];
    for(lli i=n-3;i>=0;i--)
     {
      if((height1-a[i])>=0)
        {
          height1-=a[i];
          ans++;
        }
      else if((height1-a[i])<0&&height2>0&&height1>0)
        {
          height2-=a[i];
          ans++;
        }
      else if(height1<=0&&height2>0)
        {
          height2-=a[i];
          ans++;
        }
      else if(height2<=0&&height1>0)
        {
          height1-=a[i];
          ans++;
        }
      if(height1<=0&&height2<=0)
         break;
    }
if(height1<=0&&height2<=0)
    cout<<ans<<"\n";
else
    cout<<"-1\n";
}
int main()
{
lli T;
cin>>T;
while(T--)
  cpl();
}
