/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

   int n;
   printf("Size of array =  ");
   scanf("%d",&n);
   int A[n];
   printf("enter array of %d size \n",n);
   foi(n)
      scanf("%d",&A[i]);
   sort(A,A+n);
   int low=0,high=n-1,mid,temp,flag=1;
   printf("Enter number to be searched ");
   scanf("%d",&temp);
    while(low<=high)
    {
      mid=(low+high-1)/2;
      if(temp==A[mid])
        {
          printf("The value is found at %d position in the array below \n",mid+1);
         foi(n)
          printf("%d , ",A[i]);
         flag=0;
         break;
        }
      else if(temp>A[mid])
        low=mid+1;
      else
        high=mid-1;
    }
    if(flag)
      printf("\nValue not found!");
 }
