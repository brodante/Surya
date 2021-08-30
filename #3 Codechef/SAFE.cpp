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
   string s;
   cin>>s;
   int flag=0;
   int temp=s.size();
   // gonna find sanatize'
while(temp--)
{
  if(s[temp]=='e')
  if(s[temp-1]=='z')
  if(s[temp-2]=='i')
  if(s[temp-3]=='t')
  if(s[temp-4]=='i')
  if(s[temp-5]=='n')
  if(s[temp-6]=='a')
  if(s[temp-7]=='s')
  flag=1;
}
if (flag==1)
cout<<"Safe\n";
else
cout<<"Not safe\n";
}
