#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
  int T,N,Q,Q1,Q2;
  cin>>T;
  while(T--)
  {
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
        cin>>A[i];
      cin>>Q;
      while(Q--)
      {
        cin>>Q1>>Q2;
        int total=0;
        for(int i=(Q1-1);i<=(Q2-1);i++)
          total+=A[i];
        cout<<total<<'\n';
      }
  }
}
