#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  int flag=1;
  cin>>s;
  for(int i=0;i<s.length();i++)
      s[i]=tolower(s[i]);
  int i=0,j=s.length()-1;
  while(i<=j)
  {
    while(isspace(s[i])||ispunct(s[i]))
      i++;
    while(isspace(s[j])||ispunct(s[j]))
      j--;
    if(s[i]!=s[j])
      flag=0;
    if(s[i]==s[j])
      {
        i++;
        j--;
      }
  }
    if(flag)
      cout<<"YES\n";
    else
      cout<<"NO\n";
}
