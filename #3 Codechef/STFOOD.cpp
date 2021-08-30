#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T,N,p;
  cin>>T;
  while(T--)
  {
    p=0;
    cin>>N;
    int S[N],P[N],V[N];
    for(int i=0;i<N;i++)
      {
        cin>>S[i]>>P[i]>>V[i];
        if((P[i]/(S[i]+1))>=1 && P[i]/(S[i]+1)*V[i]>p)
          p=P[i]/(S[i]+1)*V[i];
      }
      cout<<p<<'\n';
  }
}
