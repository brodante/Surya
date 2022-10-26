/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define unbuffer cin.clear(); cin.sync();
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
//using namespace boost::multiprecision;
void swap(int &a, int &b)
{
  int temp=a;
  a=b;
  b=temp;
}
int main()
{
  //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);

   int a[3]={1,2,3};
   for(int i=0;i<3;i++)
    {
      //cout<<"1, 2, 3\n";
      for(int j=0;j<3;j++)
        for(int k=0;k<3;k++)
          {
            if(i!=j&&j!=k&&i!=k)
              cout<<a[i]<<", "<<a[j]<<", "<<a[k]<<'\n';
          }
    }

 }
