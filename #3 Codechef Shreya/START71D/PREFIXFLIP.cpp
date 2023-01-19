/*Code by rubb3rducky*/
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//use INT_MAX = 2147483647
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
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   test(T)
   {
   int a,b,temp=INT_MAX;
   cin>>a>>b;
   string s;
   cin>>s;
   int arr[a];
   int c=0;
   for(int i=1; i<a; i++){
       if(s[i-1]!=s[i]){
           c++;
           arr[i]=c;
       }
       else
       arr[i]=c;
   }
   arr[0]=0;
   for(int i=a-1;i>=0;i--)
   {
       if((i-(b-1))<0)
        break;
       int check=arr[i]-arr[i-b+1];
       if(s[i]=='0')
        check++;
       temp=min(temp,check);
   }
   cout<<temp<<'\n';
   }
 }
