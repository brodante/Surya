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
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = __gcd(arr[i], result);
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
      lli n;
      cin>>n;
      lli a[n],b[n],flag=0,temp=0;
      foi(n)
        cin>>a[i];
      foi(n)
      {
        b=a;
        for(int j=0;j<n;j++)
        {
          if(b[j]%b[i]==0)
            flag++;
        }
        if(!flag)
          foj(n)
          b[j]/=b[i];
          temp=findGCD(b,n);
      }
   }
 }
