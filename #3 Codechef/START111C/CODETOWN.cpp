/*Code by rubb3rducky*/
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pb push_back
#define eb emplace_back
#define pi 3.14159265358979323846
#define MOD 1000000007
#define unbuffer cin.clear(); cin.sync();
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
//using namespace boost::multiprecision;
bool isVowel(char x)
{
    return x=='A'||x=='E'||x=='I'||x=='O'||x=='U';
}
bool solve(string s)
{
    string a="CODETOWN";
    foi(s.length())
        if((isVowel(s[i])&&!isVowel(a[i]))||(!isVowel(s[i])&&isVowel(a[i])))
            return false;
    return true;
}
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   test(T)
   {
     string s;
     cin>>s;
     if(solve(s))
         cout<<"YES\n";
     else
         cout<<"NO\n";
   }
 }
