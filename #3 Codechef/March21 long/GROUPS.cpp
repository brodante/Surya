/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n-1;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
test(n)
{
lli x=0;
string Str;
cin>>Str;
lli n=Str.size();
foi(n)
{
if(Str[i]=='1' && Str[i+1]=='0')
{
x++;
/*while(s[i]!='0')
  {
    i++;
    cout<<" i = "<<i<<'\n';
  }
*/
}
}
if(Str[n-1]=='1')
x++;
cout<<x<<'\n';
}
}
