/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
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
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
sort(a,a+n);
int temp2=0;
int temp1=0;
for (int i=0;i<n;i++)
{
    if(i+1-a[i]<0)
    {
    temp1=1;
    break;
    }
temp2=temp2+(i+1 - a[i]);
}
if(temp1==1)
{
    cout<<"Second"<<'\n';
}
else
{
    if(temp2%2==1)
        cout<<"First"<<'\n';
    else
        cout<<"Second"<<'\n';
}
}
}
