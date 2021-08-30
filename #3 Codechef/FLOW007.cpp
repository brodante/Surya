#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  long N,Q=0;
  cin>>T;
  while(T--)
  { Q=0;
    cin>>N;
    while(N!=0)
    {
      Q+=(N%10);
      Q*=10;
      N/=10;
    }
    cout<<Q/10<<'\n';
  }
return 0;
}
