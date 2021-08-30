#include <bits/stdc++.h>
#define lli long long
#define foi(n)  for(lli i=1;i<n-1;i++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
test(n)
{
  int f[5]={0,0,0,0,0};
  string S;
  cin>>S;
  if(S.size()<10)
  cout<<"NO"<<'\n';
  else
  {
      if(S[0]>=97 && S[0]<=122)
      f[2]=1;
      if(S.back()>=97 && S.back()<=122)
      f[2]=1;
      foi(S.size())
      {
        if(S[i]>=65 && S[i]<=90)
        f[1]=1;
        if(S[i]>=97 && S[i]<=122)
        f[2]=1;
        if(S[i]>=48 && S[i]<=57)
        f[3]=1;
        if(S[i]=='@'||S[i]=='#'||S[i]=='%'||S[i]=='&'||S[i]=='?')
        f[4]=1;
      }
      if(f[1]+f[2]+f[3]+f[4]==4)
      cout<<"YES"<<'\n';
      else
      cout<<"NO"<<'\n';
    }
}
}
