/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
double A,B;
char C;
cin>>A>>B>>C;
switch (C)
{
  case '+':
  cout<<A+B<<'\n';
  break;
  case '-':
  cout<<A-B<<'\n';
  break;
  case '/':
  cout<<fixed<<setprecision(6)<<A/B<<'\n';
  break;
  case '*':
  cout<<A*B<<'\n';
}
 }
