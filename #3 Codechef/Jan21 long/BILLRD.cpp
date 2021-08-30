#include <bits/stdc++.h>
using namespace std;
int main()
{

long long T,N,K,x,y;
  cin>>T;
  while(T--)
  {
   int X[4],Y[4];
    cin>>N>>K>>x>>y;
    if(x==y)
    cout<<N<<' '<<N<<'\n';
/*    else if((x==N && y==0) || (x==0 && y==N))
    {
      cout<<x<<' '<<y<<'\n';
    }
*/
    else
    {
      if(y>x)
      {
          X[0]=((N-y)+x);
          Y[0]=(N);
          X[1]=(N);
          Y[1]=(X[0]);
          X[2]=(y-x);
          Y[2]=(0);
          X[3]=(0);
          Y[3]=(X[2]);
      }
      else
      {
        Y[0]=((N-x)+y);
        X[0]=(N);
        Y[1]=(N);
        X[1]=(Y[0]);
        Y[2]=(x-y);
        X[2]=(0);
        Y[3]=(0);
        X[3]=(Y[2]);
        }
if(K>4)
  K%=4;
cout<<X[K-1]<<' '<<Y[K-1]<<'\n';
}
}
}
