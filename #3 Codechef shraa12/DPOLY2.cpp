#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,ans=0,count=0;
    cin>>n;
    int a[n],i;
    for(i=1;i<=n;i++)
    cin>>a[i];
    if(a[n]!=0)
    cout<<n-1<<endl;
    else
    {
      for(i=n;i>0;i--)
      {
        if(a[i]==0)
        {
          ans=n-1;
          count++;
        }
      }
      cout<<ans-1<<endl;
    }
  }
  return 0;
}
