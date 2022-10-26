#include<bits/stdc++.h>
#define lli long long
using namespace std;
int main()
{
  lli t;
  cin>>t;
  while(t--)
    {
      lli n,flag=0;
      cin>>n;
      lli a[n],count=0;
      if(n==2)
        {
          lli a,b;
          cin>>a>>b;
          if(a<=b)
            cout<<"YES\n";
          else
            cout<<"NO\n";
        }
      else
      {
      for(int i=0;i<n;i++)
        cin>>a[i];
      for(int i=0;i<n-1;i++)
        {
          if(a[i]<a[i+1])
            count++;
          else
          {
            flag=1;
            break;
          }
        }
        //cout<<count<<" "<<flag<<'\n';
        if(flag)
        {
          lli temp=a[count];
          a[count]=a[count+1];
          a[count+1]=temp;
        }
        count=0;
      for(int i=0;i<n-1;i++)
        {
          if(a[i]<=a[i+1])
            count++;
        }
        if(count==n-1)
          cout<<"YES\n";
        else
          cout<<"NO\n";
      }
    }
}
