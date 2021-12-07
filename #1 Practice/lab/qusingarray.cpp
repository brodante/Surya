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
#define N 5
int Qu[N];
int front=-1,rear=-1;
void enQu(int x)
{
  if(rear==N-1)
    cout<<"Queue Overflow!!\n";
  else if(front==-1&&rear==-1)
    {
      front=rear=0;
      Qu[rear]=x;
    }
    else
    {
      rear++;
      Qu[rear]=x;
    }
}
int deQu()
{
  if(front==-1&&rear==-1)
    {
      cout<<"Empty Queue";
    }
    else
    {
      //free Qu[rear];
      rear--;
      if(rear==-1)
        front=-1;
    }
  return rear;
}
void traverse()
{
  int temp=front;
  if(front==-1&&rear==-1)
    cout<<"Empty Queue!!\n";
  else
  {

    while(temp<=rear)
    {
      cout<<temp+1<<". "<<Qu[temp]<<'\n';
      temp++;
    }
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);

   enQu(10);
   enQu(12);
   enQu(69);
   enQu(240);
   enQu(22);
   enQu(220);
   enQu(540);
   traverse();
   cout<<"Deleted element from the queue is "<<Qu[deQu()+1]<<'\n';
   traverse();
   //cout<<"___________________\n";
   //enQu(420);
   //traverse();

 }
