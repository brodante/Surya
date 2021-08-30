#include <bits/stdc++.h>
#define lli long long
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
  char a;
  cin>>a;
  if(a=='B'||a=='b')
  cout<<"BattleShip\n";
  else if(a=='C'||a=='c')
  cout<<"Cruiser\n";
  else if(a=='D'||a=='d')
  cout<<"Destroyer\n";
  else if(a=='F'||a=='f')
  cout<<"Frigate\n";
  else
  cout<<"are u retarded??\n";
}
}
