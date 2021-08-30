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
  string s;
  cin>>s;
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]==s[i+1])
    {
      s.erase(i,2);
    }
  }
  int n=s.size();
  string m= s.substr(n/2,n/2);
  cout<<m;
}
