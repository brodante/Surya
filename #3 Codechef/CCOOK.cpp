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
   cin.tie(NULL);
   test(n)
   {
     int A[5],flag=0;
     foi(5)
     {
       cin>>A[i];
       if(A[i]==1)
       flag++;
     }
     switch (flag)
     {
       case 0:
       cout<<"Beginner\n";
       break;
       case 1:
       cout<<"Junior Developer\n";
       break;
       case 2:
       cout<<"Middle Developer\n";
       break;
       case 3:
       cout<<"Senior Developer\n";
       break;
       case 4:
       cout<<"Hacker\n";
       break;
       case 5:
       cout<<"Jeff Dean\n";
       break;
     }
   }
 }
