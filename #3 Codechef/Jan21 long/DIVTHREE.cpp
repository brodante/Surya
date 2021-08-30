#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  int T,N;
  int K,D;
  cin>>T;
  while(T--)
  {
    cin>>N>>K>>D;
    int A,sum=0,count=0;
    while(N--)
    {
      cin>>A;
      sum+=A;
    }
    if(sum/K>=D)
    cout<<D<<'\n';
    else
    {
      count=sum/K;
      /*while(sum>=K)
      {
        count++;
        sum-=K;
      }*/
      cout<<count<<'\n';
    }
    }
  }
