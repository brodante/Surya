/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pb push_back
#define eb emplace_back
#define pi 3.14159265358979323846
#define MOD 1000000007
#define unbuffer cin.clear(); cin.sync();
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
//using namespace boost::multiprecision;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   test(T)
   {
      lli n,temp=0,k,ans=0,flag=0,k2;
      cin>>n>>k;
      int a[n],b[n];
      for(int i=0;i<n;i++)
        cin>>a[i];
      for(int i=0;i<n;i++)
        cin>>b[i];
      for(int i=0;i<n-1;i++)
          for(int j=0;j<n-i-1;j++)
              if(b[j]>b[j+1])
                  {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    temp=b[j];
                    b[j]=b[j+1];
                    b[j+1]=temp;
                  }
      temp=-1;
      k2=k;
      for(int i=0;i<k;i++)
      {
        if(temp==a[i])
            k++;
        else if(temp!=a[i+1])
        {
          flag++;
          ans+=b[i];
          temp=a[i];
        }
      }
      if(flag<k2)
        cout<<"-1\n";
      else
        cout<<ans<<'\n';
   }
 }
