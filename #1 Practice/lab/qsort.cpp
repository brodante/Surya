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
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high)
{
int pivot = array[high];
int i = (low - 1);
for (int j = low; j < high; j++)
{
    if (array[j] <= pivot)
    {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quicksort( int a[],int low, int high)
{
  if(low<high)
    {
      int piv=partition(a,low,high);
      quicksort(a,low,piv-1);
      quicksort(a,piv+1,high);
    }
}
int main()
{
  //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);

   int a[10];
   foi(10)
    cin>>a[i];

    int n=(sizeof(a)/sizeof(a[0]));
    quicksort(a,0,n-1);
    foi(10)
      cout<<a[i]<<", ";

 }
