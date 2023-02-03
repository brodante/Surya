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
      int m;
      cin>>m;
      m/=2;
      m*=2;
      if(m==0||m==2)
        {
          cout<<"0\n";
        }
      else
        {
          //int a=((m/2)-1); //
          //int b=((m/2)-2);//0 -1
          //int ans=(m*m)/4;//4 1
          //ans=ans-(a+b+d);
          int d=sqrt(((m*m)+(m*m))/8);//2 1
          int ans=(((m*m)/4)-d)/2;
          cout<<ans<<'\n';
        }
    }
  return 0;
}
