/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
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
int main()
{
    int n,temp,i=2,no;
    cin>>n>>temp;
    bool ans=true;
    while(i<=n)
    {
        cin>>no;
        if(no==temp)
        {
            cout<<"false";
            return 0;
        }
        i++;
        if(no<temp)
        {
            if(ans==false)
            {
                cout<<"false";
                return 0;
            }
        }
        else
        {
            if(ans==true)
                ans=false;
        }
        temp=no;
    }
    cout<<"true";
}
