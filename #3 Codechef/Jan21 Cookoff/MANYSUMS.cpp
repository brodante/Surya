#include <bits/stdc++.h>
#define lli long long
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
test(n)
{
  lli L,R,smol,big,p,q,count=0;
cin>>L>>R;
  smol=min(L,R);
  big=max(L,R);
  count=(big-smol+1);
  for(lli i=1;i<=big-smol;i++)
  {
    count++;
  }
  cout<<count<<'\n';
}
}
