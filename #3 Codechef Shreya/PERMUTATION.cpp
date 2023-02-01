#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long t;
  cin>>t;
  while(t--)
    {
      int n,flag=1,ans=0,count=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }
        sort(a,a+n);
      for(int i=0;i<n;i++)
      {
        if(a[i]-(i+1)>0)
        {
            flag=0;
        }
        ans+=(i+1)-a[i];
      }
      if(flag)
        {
          cout<<ans<<'\n';
        }
      else
        {
          cout<<"-1\n";
        }
    }
  return 0;
}
