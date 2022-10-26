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

void insertionSort(int arr[], int n)
{
    int i,key,j;
    foi(n)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

int main()
{
  ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);

   int n;
   cout<<"enter the no of elements in the array\n";
   cin>>n;
   int a[n];
   foi(n)
    cin>>a[i];
insertionSort(a,sizeof(a)/sizeof(a[0]));

  foi(n)
    cout<<a[i]<<", ";
}
