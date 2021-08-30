/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
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
   int t,n;
	string s;
	cin>>t;
	while(t--){
	int r=0,b=0,g=0;
		cin>>n;
		cin>>s;
		for(int i=0;i<n;i++){

				if(s[i]=='R')
				r++;

				if(s[i]=='B')
				b++;

				if(s[i]=='G')
				g++;

}
int res1=max(r,b);
int res2=max(g,res1);

	cout<<n-res2<<endl;
	}
 }
