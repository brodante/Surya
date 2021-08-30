/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
//using namespace boost::multiprecision;
int sum(int a[], int n)
{
  lli temp=0;
  foi(n)
    temp+=a[i];
  return temp;
}
int findGCD(int a[], int n)
{
    int result = a[0];
    for (int i = 1; i < n; i++)
    {
        result = __gcd(a[i], result);
        if(result == 1)
           return 1;
    }
    return result;
}
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   test(T)
   {
      lli n,pro=1,temp2=0,x,temp,tot=0;
      cin>>n;
      int a[n],b[n];
      foi(i)
      {
        cin>>a[i];
        pro*=a[i];
        if(temp2<a[i])
        temp2=a[i];
      }
      temp=sizeof(a)/sizeof(a[0]);
      x=findGCD(a,n);
      foi(n)
      b[i]=a[i];
      foi(n)
      {
        foi(n)
        b[i]=a[i];
        if(b[i]/=temp2)
          foj(n)
            b[j]/=x;
          tot=sum(b,n);
          if(tot>=sum(b,n))
            tot=sum(b,n);
      }
      cout<<tot<<'\n';
   }
 }
