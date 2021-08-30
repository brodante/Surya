#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
  long long int T,N,i=1,R,F;
  cin>>T;
  while(T--)
  {
    cin>>N;
    int A[N];
    R=1;
    F=0;
    for(i=0;i<N;i++)
      {
        cin>>A[i];
        R*=A[i];
      }
    for(i=1;i<=R;i++)
    {
      if(R%i==0)
      F++;
    }
    cout<<F<<'\n';
  }
}
