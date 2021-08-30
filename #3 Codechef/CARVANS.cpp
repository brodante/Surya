#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T,temp=1,N,i,j,count=0;
  cin>>T;
  while(T--)
  {
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
      {
        cin>>A[i];
        if(i==0)
         {
           temp=A[0];
           count++;
         }
        else if(A[i]<=temp)
          {
            temp=A[i];
            count++;
          }
      }
      printf("%d\n",count);
      count=0;
  }
}
