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

void selectionSort(int arr[], int n)
{
    int i, j,temp,temp1;
    foi(n-1)
    {
        temp=i;
        for(j=i+1;j<n;j++)
        if (arr[j]<arr[temp])
            temp=j;
        temp1=arr[temp];
        arr[temp]=arr[i];
        arr[i]=temp1;
    }
}
int main()
{
  ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);

   int n;
   cout<<"enter the size of the array : \n";
   cin>>n;
   int a[n];
   foi(n)
    cin>>a[i];

    selectionSort(a,(sizeof(a)/sizeof(a[0])));

    foi(n)
      cout<<a[i]<<", ";


 }
