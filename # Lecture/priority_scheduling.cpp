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
void swap(int &a, int &b)
{
  int c=a;
  a=b;
  b=c;
}
int main()
{
  ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);

   cout<<"Enter the following data in sequence process, burst time, priority\n";
   int pno[3],btime[3],priority[3],wtime=0,ttime=0;
   foi(3)
    {
      cin>>pno[i]>>btime[i]>>priority[i];
    }

    foi(2)
    {
      foj(2-i)
        {
          if(priority[j]>priority[j+1])
            {
              swap(priority[j],priority[j+1]);
              swap(pno[j],pno[j+1]);
              swap(btime[j],btime[j+1]);
            }
        }
    }
    cout<<"P.no.   btime   priority wtime   ttime\n";
    double tot=0,tot2=0;
    foi(3)
    {
      ttime+=btime[i];
      tot+=wtime;
      cout<<pno[i]<<'\t'<<btime[i]<<'\t'<<priority[i]<<"\t "<<wtime<<"\t "<<ttime<<'\n';
      wtime+=btime[i];
      tot2+=ttime;
    }
    cout<<"The average waiting time is:"<<tot/3<<'\n';
    cout<<"The average turn around time is:"<<(tot2)/3;
 }
