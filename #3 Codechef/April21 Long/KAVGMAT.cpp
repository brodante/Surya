/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define foi(n)  for(lli i=0;i<=n;i++)
#define foj(n)  for(lli j=0;j<=n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
lli solve()
{
lli N,N1,N2;
cin>>N>>N1>>N2;
double a[N+1][N1+1];
memset(a,0,sizeof(a));
lli ans=0;
for(lli i=1;i<=N;i++)
  for(lli j=1;j<=N1;j++)
        cin>>a[i][j];
foi(N)
  {
  double temp=0;
  foj(N1)
  {
      temp+=a[i][j];
      a[i][j]=temp;
  }
}
foj(N1)
{
    double temp=0;
    foi(N)
    {
        temp+=a[i][j];
        a[i][j]=temp;
    }
}
lli xc=(N1<N)?N1:N;
for(lli l=1;l<=xc;l++)
  for(lli i=l;i<=N;i++)
        for(lli j=l;j<=N1;j++)
        {
            double f=a[i][j]+a[i-l][j-l]-a[i-l][j]-a[i][j-l];
            f=f/(l*l);
            if(f>=N2)
                ans++;
        }
return ans;
}
int main()
   {
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      test(t)
        cout<<solve()<<'\n';
    }
