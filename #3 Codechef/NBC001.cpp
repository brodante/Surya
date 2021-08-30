/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<=n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
test(n)
{
lli d,b,c,a[3];
cin>>a[0]>>a[1]>>a[2];
d=a[0];
b=a[1];
c=a[2];
sort(a,a+3);
if(a[0]+a[1]<=a[2])
cout<<"NO \n";
else
{
  long double area,s,p;
 s=(d+b+c)/2;
 p=s*(s-d)*(s-b)*(s-c);
 area=sqrt(p);
cout<<"YES "<<fixed<<setprecision(5)<<area<<'\n';
}
}
}
