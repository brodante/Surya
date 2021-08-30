#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int T,N,sum=0;
cin>>T;
while(T--)
{
  cin>>N;
  int A[N]={0,0,1,1,2};
  if(N<4)
  {
    for(int i=1;i<=N;i++)
    cout<<A[i];
  cout<<'\n';
  }
  else
  {
    cout<<A[1]<<A[2]<<A[3]<<A[4];
    for(int i=4;i<N;i++)
    {
      cout<<sum+A[i-1];
      sum+=A[i];
    }
    cout<<'\n';
  }
}
}
