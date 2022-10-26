#include<bits/stdc++.h>
#define lli long long
using namespace std;
int main()
{
  lli t;
  cin>>t;
  while(t--)
    {
      lli n,count=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(i>0)
          {
            if(a[i-1]>a[i])
              {
                lli temp=a[i-1];
                a[i-1]=a[i];
                a[i]=temp;
                if(a[i-2]>a[i-1]&&i>1)
                  count+=2;
                else
                  count++;
              }
          }
      }
      if(count<2)
        cout<<"YES\n";
      else
        cout<<"NO\n";
    }
}
