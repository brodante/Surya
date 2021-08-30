#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  test(n)
  {
    lli n;
    cin>>n;
    int a[n][n];
    foi(n)
      foj(n)
        cin>>a[i][j];
  lli x=n-1,y=0,trace=0;
  while(y<n)
  {
    int temp=0;
    for(int p=x,q=y;p<n&&q<n;p++,q++)
      temp+=a[p][q];
    //trace=max(trace,temp);
    if(trace<temp)
    trace=temp;
    if(x)
    x--;
    else
    y++;

  }
  cout<<trace<<'\n';
  }
}
