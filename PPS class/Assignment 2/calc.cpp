/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
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

  int a,c,ans;
  char b;
  printf("This is a custom calculator.\n");
  scanf("%d%c%d",&a,&b,&c);
  switch (b)
  {
    case '+':
      ans=a+c;
      break;
    case '-':
      ans=a-c;
      break;
    case '*':
      ans=a*c;
      break;
    case '/':
      ans=a/c;
  }
printf("%d%c%d=%d",a,b,c,ans);
 }
