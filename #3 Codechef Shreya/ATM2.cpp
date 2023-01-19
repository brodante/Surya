#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
  cin>>t;
  while(t--)
    {
      cin>>n;
      int a[n],k;
      cin>>k;
      for(int i=0;i<n;i++)
        cin>>a[i];
      for(int i=0;i<n;i++)
      {
        if(k>=a[i])
          {
            cout<<'1';
            k-=a[i];
          }
        else
          cout<<'0';
      }
    cout<<'\n';
    }
	return 0;
}
