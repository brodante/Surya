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
int prec(char c)
{
	if(c=='^')
		return 3;
	else if(c=='/'||c=='*')
		return 2;
	else if(c =='+'||c=='-')
		return 1;
	else
		return -1;
}
void infixToPostfix(string s)
{
	stack<char> st;
	string result;
	foi(s.length())
  {
		char c=s[i];
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
			result+=c;
		else if(c=='(')
			st.push('(');
		else if(c==')')
    {
			while(st.top()!='(')
			{
				result+=st.top();
				st.pop();
			}
			st.pop();
		}
		else
    {
			while(!st.empty()&&prec(s[i])<=prec(st.top()))
      {
				result+=st.top();
				st.pop();
			}
			st.push(c);
		}
	}
	while(!st.empty())
  {
		result+=st.top();
		st.pop();
	}
	cout<<result<<'\n';
}
int main()
{
	string exp;
  cin>>exp;
	infixToPostfix(exp);
	return 0;
}
