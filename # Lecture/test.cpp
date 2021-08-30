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
cout<<"Enter the value of a,b,c ( in format of ax^2 + bx + c = 0)\n";
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
float r1,r2;
r1=r2=-b/(2*a);
if(a==0)
  printf("Enter a Quadratic eqn");
else if(b>=0&&c>=0)
  {
    float D=(b*b)-4*a*c;
    if(D>0)
    {
      r1=(-b+D)/(2*a);
      r2=(-b-D)/(2*a);
      printf(" Root 1 = %.3f & Root 2 = %.3f",r1,r2);
    }
    else if(D==0)
    {
      r1=r2=(-b)/(2*a);
      printf(" Root 1 = %.3f & Root 2 = %.3f",r1,r2);
    }
    else
    {
      printf(" Root 1 = %.3f+(%.3fi) & Root 2 = %.3f-(%.3fi)\n",r1,D/(2*a),r2,D/(2*a));
    }
  }
else
  printf("Enter a valid eqn");
}
