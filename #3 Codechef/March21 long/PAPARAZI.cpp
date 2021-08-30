/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   lli N,A,ans,temp;
test(n)
{
cin>>N;
vector<pair<lli,lli>>p1,p2;
double slope1,slope2,s1,s2,s3,s4;
ans=1,temp=2;
foi(N)
{
  cin>>A;
  p1.push_back({i,A});
}
if(N==2)
cout<<"1\n";
else
{
  p2.push_back(p1[0]);
  p2.push_back(p1[1]);
  for(int i=2;i<N;i++)
  {
    while(temp>=2)
    {
      s1=((double)p2[temp-1].second-(double)p2[temp-2].second);
      s2=((double)p2[temp-1].first-(double)p2[temp-2].first);
      slope1=(s1/s2);
      s3=((double)p1[i].second-(double)p2[temp-1].second);
      s4=((double)p1[i].first-(double)p2[temp-1].first);
      slope2=(s3/s4);
      if(slope1>slope2)
      break;
      else
      {
        p2.pop_back();
        temp--;
      }
    }
    p2.push_back(p1[i]);
    temp++;
    ans=max(ans,p2[temp-1].first-p2[temp-2].first);
  }
  cout<<ans<<'\n';
}
}
}
