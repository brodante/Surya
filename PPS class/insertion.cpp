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
   printf("Size of array? ");
   scanf("%d",&n);
   int A[n],temp;
   foi(n)
    scanf("%d",&A[i]);
   for(int i=1;i<n;i++)
   {
     for(int j=i;j>0;j--)
     {
       if(A[j]<A[j-1])
       {
         temp=A[j];
         A[j]=A[j-1];
         A[j-1]=temp;
         //A[j+1]=A[j];
       }
       //A[j+1]=temp;
     }
   }
   printf("\nSorted array is : \n");
   foi(n)
    printf("%d , ",A[i]);
 }
