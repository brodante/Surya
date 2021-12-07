/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define unbuffer cin.clear(); cin.sync();
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
//using namespace boost::multiprecision;

struct Node
{
  Node *top=NULL;
  int data1,link,data2;
}s;
void push()
{
  Node* q=new Node;
  cin>>q->data1;
  cin>>q->data2;
  q->link=top;
  top=q;
}
void pop()
{
  Node *q=top;
  if(top==NULL)
    cout<<"Empty Stack";
  else
    {
      cout<<"Deleted node is :/n"<<q->data1<<" and "<<q->data2;
      delete q;
    }
}
void traverse()
{
  Node *s=top;
  if(top==NULL)
    cout<<"Empty Stack";
  else
    {
      cout<<"All Stacks are :/n"
      while(s!=NULL)
        {
          cout<<s->data1<<" and "<<s->data2;
          s=s->link;
        }
    }
}

int main()
{
  ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);

 }
