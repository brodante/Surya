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
int getPriority(char C)
{
	if (C=='-'||C=='+')
		return 1;
	else if (C=='*'||C=='/')
		return 2;
	else if (C=='^')
		return 3;
	return 0;
}
string infixToPostfix(string infix)
{
	infix='('+infix+')';
	int l=infix.size();
	stack<char> char_stack;
	string output;
	foi(l)
  {
		if (isalpha(infix[i])||isdigit(infix[i]))
			output+=infix[i];
		else if (infix[i]=='(')
			char_stack.push('(');
		else if (infix[i]==')')
    {
			while (char_stack.top()!='(')
      {
				output+=char_stack.top();
				char_stack.pop();
			}
			char_stack.pop();
		}
		else
		{
			if (!isalpha(char_stack.top())&&!isdigit(char_stack.top()))
			{
				if(infix[i]=='^')
				{
					while(getPriority(infix[i])<=getPriority(char_stack.top()))
					{
						output+=char_stack.top();
						char_stack.pop();
					}
				}
				else
				{
					while(getPriority(infix[i])<getPriority(char_stack.top()))
					{
						output+=char_stack.top();
						char_stack.pop();
					}
				}
				char_stack.push(infix[i]);
			}
		}
	}
	while(!char_stack.empty())
  {
		output+=char_stack.top();
		char_stack.pop();
	}
	return output;
}
string infixToPrefix(string infix)
{
	int l=infix.size();
	reverse(infix.begin(),infix.end());
  //cout<<infix<<'\n';
	foi(l)
   {
		if(infix[i]=='(')
    {
			infix[i]=')';
			i++;
		}
		else if(infix[i]==')')
    {
			infix[i]='(';
			i++;
		}
	}
	string prefix=infixToPostfix(infix);
	reverse(prefix.begin(),prefix.end());
	return prefix;
}
int main()
{
	string s;
  cin>>s;
	cout<<infixToPrefix(s)<<'\n';
	return 0;
}
