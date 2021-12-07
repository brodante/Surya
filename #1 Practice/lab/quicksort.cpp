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
void quickSort(int a[],int first,int last)
{
    int pivot=first,i=first,j=last,temp;
    if(first<last)
    {
        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quickSort(a,first,j-1);
        quickSort(a,j+1,last);
    }
}

int main()
{
  //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);
       int n;
       cout<<"Enter the size of array \n";
       cin>>n;
       int arr[n];
       cout<<"Enter the array's elements \n";
       foi(n)
        cin>>arr[i];
       quickSort(arr,0,n-1);
       foi(n)
           cout<<arr[i]<<", ";
}
