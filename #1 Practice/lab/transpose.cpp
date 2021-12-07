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
int main()
{
  /*ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);*/
int a[3][3],b[3][3],temp=0;
/*foi(3)
  {
    foj(3)
      {
        cin>>a[i][j];
        b[j][i]=a[i][j];
      }
  }
foi(3)
{
  foj(3)
    {
      a[i][j]=b[i][j];
      cout<<a[i][j]<<" | ";
    }
    cout<<endl;
}
*/
foi(3)
  {
    foj(3)
      {
        cin>>a[i][j];
      }
  }
foi(3)
  {
    for(int j=0;j<3;j++)
        if(i<j)
        {
          temp=a[i][j];
          a[i][j]=a[j][i];
          a[j][i]=temp;
        }
  }
foi(3)
  {
    foj(3)
      {
        cout<<a[i][j]<<" | ";
      }
      cout<<'\n';
  }
}
