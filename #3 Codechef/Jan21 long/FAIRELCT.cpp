#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T,N,M;
  cin>>T;
  while(T--)
  {
    cin>>N>>M;
    int john[N],jack[M],total=0,total2=0,flag=0;
    for (size_t i = 0; i < N; i++)
    {
        cin>>john[i];
        total2+=john[i];
    }
    for (size_t i = 0; i < M; i++)
    {
      cin>>jack[i];
      total+=jack[i];
    }
    sort(john,john+N);
    sort(jack,jack+M,greater<int>());
    if(total2>total)
    cout<<'0'<<'\n';
    else
    {
      total2=total=0;
      for(int i=0;i<min(N,M);i++)
      {
        swap(john[i],jack[i]);
        for(int j=0;j<N;j++)
        total2+=john[j];
        for(int j=0;j<M;j++)
        total+=jack[j];
        if(total2>total)
          {
            cout<<i+1<<'\n';
            flag=1;
          break;
          }
      }
      if(flag!=0)
      cout<<"-1"<<'\n';
    }
  }
}
