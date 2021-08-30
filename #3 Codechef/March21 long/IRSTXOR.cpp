/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(int i=temp1.find('1')+1;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
test(n)
{
	    int c,a=0,b=0;
	    const int bit =64;
      cin>>c;
	    string temp1=bitset<bit>(c).to_string();
	    string temp2=bitset<bit>(a).to_string();
	    string temp3=bitset<bit>(b).to_string();
	    temp2[temp1.find('1')]='1';
	    foi(bit)
	    {
	        temp3[i]='1';
	        if(temp1[i]=='0')
	            temp2[i]='1';
	    }
        cout<<stoi(temp2,nullptr,2)*stoi(temp3,nullptr,2)<<'\n';
	}
}
