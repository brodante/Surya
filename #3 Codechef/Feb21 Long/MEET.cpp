/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
   int calch(string mytime, int t)
   {
       int mh;
       mh = 10 *(mytime[0 + t] - '0') + 1* (mytime[1 + t] - '0');
       if(mytime[6+t] == 'P'){if(mh != 12) mh += 12;}
       if(mytime[6 + t] == 'A') {if(mh == 12) mh-= 12;}
       return mh;
   }
   int calcm(string mytime, int t)
   {
       int mm;
       mm = 10 *(mytime[3 + t] - '0') + (mytime[4 + t] - '0');
       return mm;
   }

   int main()
   {
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      test(t)
       {
           string mytime; getline(cin, mytime);
           int mh = calch(mytime, 0);
           int mm = calcm(mytime, 0);
           long long n; cin>>n; cin.ignore();
           string res = "";
           while(n--)
           {
               string FTime; getline(cin, FTime);
               int fsh = calch(FTime, 0);
               int fsm = calcm(FTime, 0);
               int F5 = calch(FTime, 9);
               int F6 = calcm(FTime, 9);


               if((fsh> mh)||(F5< mh)) {res.push_back('0');}
               else if(fsh == mh && fsm> mm) res.push_back('0');
               else if(F5 == mh && F6< mm) res.push_back('0');
               else res.push_back('1');
           }
           cout<<res<<"\n";
       }
       return 0;
   }
