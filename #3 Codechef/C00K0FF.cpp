#include <bits/stdc++.h>
#define lli long long
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
test(T)
/*lli T;
cin>>T;
while(T--)*/
{
  int flags[6]={1,0,0,0,0,0};
  lli N;
  cin>>N;
  string prob[N];
  foi(N)
  {
    cin>>prob[i];
    if(prob[i]=="cakewalk")
    flags[1]=1;
    else if(prob[i]=="simple")
    flags[2]=1;
    else if(prob[i]=="easy")
    flags[3]=1;
    else if(prob[i]=="easy-medium" || prob[i]=="medium")
    flags[4]=1;
    else if(prob[i]=="medium-hard" || prob[i]=="hard")
    flags[5]=1;
  }
  foj(5)
  {
    if(flags[j+1]==0)
    flags[0]=0;
  }
  if(flags[0]==0)
  cout<<"No\n";
  else
  cout<<"Yes\n";
}
}
