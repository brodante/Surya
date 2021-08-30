#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T,mid;
  cin>>T;
  while(T--)
  {
    string S,temp1,temp2;
    cin>>S;
    float size=S.size();
    temp1=S.substr(0,size/2);
    temp2=S.substr(ceil(size/2),size);
    sort(temp1.begin(),temp1.end());
    sort(temp2.begin(),temp2.end());
    if(temp1.compare(temp2)==0)
      cout<<"YES"<<'\n';
    else
    cout<<"NO"<<'\n';
  }
  return 0;
}
