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

  int Y;
  printf("Enter the year... ");
  scanf("%d",&Y);
  if(!(Y%400))
    printf("%d is a leap year with 366 days. ",Y);
  else if(Y%100!=0)
    printf("%d is not a leap year.",Y);
  else if(!(Y%4))
  printf("%d is a leap year with 366 days. ",Y);
  else
  printf("%d is not a leap year.",Y);
 }
