#include <bits/stdc++.h>
using namespace std;
int main()
{
int T,N,S;
cin>>T;
while(T--)
{
  cin>>N;
  int asc=104,temp=8,i=0;
  string S;
  cin>>S;
  int c=N/4;
/*  for(int i=0;i<N;i++)
  cin>>S[i];*/
while(c--)
{
//  i+=4
temp=8;
asc=104;
int j=i; // 1 0 0 1
char x;
for(i;i<j+3;i++) //0 1 2
{
  if(S[i]=='0')
    {
      asc-=temp/2;
    //  cout<<(asc)<<endl;
    }
  if(S[i]=='1')
    asc+=temp/2;
  temp/=2;
  if(i==(j+2) && S[i+1]=='0')
  x=asc;
  //cout<<(asc)<<'\n';
  if(i==(j+2) && S[i+1]=='1')
  x=asc+1;
  //cout<<"S[i] = "<<S[i]<<endl;
  //cout<<(asc+1)<<'\n';
  //cout<<(asc+2);
}
//cout<<char(asc+2);
cout<<x;
i++;
//cout<<"x = "<<x<<endl;
//cout<<char(temp)<<'\n';
//cout<<S[0]<<S[2];
}
cout<<'\n';
}
}
