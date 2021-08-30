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

   int T,d,ans;
   printf("To enter the temperature in celcius press '1' and for Kelvin press '2' ... \n");
   scanf("%d",&d);
   if(d==1)
   {
     printf("Enter the temperature in Celcius... ");
     scanf("%d",&T);
     ans=(T*9)/5+32;
     printf("%d degrees Fahrenheit.",ans);
   }
   if(d==2)
   {
     printf("Enter the temperature in Kelvin... ");
     scanf("%d",&T);
     ans=(T-273)*9/5+32;
     printf("%d degrees Fahrenheit.",ans);
   }
 }
