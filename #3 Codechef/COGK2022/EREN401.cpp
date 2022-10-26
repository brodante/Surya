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
   lli n,i=0,j=0;
   cin>>n;
   int arr[10],arr2[10];
   foi(10)
    arr[i]=arr2[i]=-1;
   while(n!=0)
    {
      if((n%10)%2==0)
      {
        arr[i]=n%10;
        i++;
      }
      else
      {
        arr2[j]=n%10;
        j++;
      }
      n/=10;
    }
   for(int k=0;k<i;k++)
    cout<<arr[k];
   for(int m=0;m<j;m++)
    cout<<arr2[m];

   sort(arr,arr+i);
   sort(arr2,arr2+j);
/*
   for(int a=0;a<i+j;a++)
    {
      for(int b=0;b<i;b++)
        {
          for(int c=0;c<j;c++)
            {
              if(arr[i])
            }
        }
    }
*/
for(int a=0;a<max(i,j);a++)
  {
    if(arr[i])
  }
 }
