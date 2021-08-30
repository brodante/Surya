#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  int T,t1,t2,N,f=0;
  cin>>T;
  while(T--)
  {
    t1=t2=0;
    cin>>N;
    char P[2*N];
    cin>>P;
    for (size_t i = 0; i < strlen(P); i++)
    {
      f=0;
      //cout<<"flag = "<<f<<'\n';
      if(i%2==0 && P[i]=='1')
      t1++;
      else if(i%2!=0 && P[i]=='1')
      t2++;
      //if(abs(t1-t2)>(N-(i+1)/2))
      if(t1>(t2+N-i-1) || t2>(t1+N-i-1))
      {
        cout<<i+2<<'\n';
          f=1;
        break;
      }
    }
    //cout<<"flag = "<<f<<'\n';
    if(f==0)
    cout<<2*N<<'\n';
  }
}
