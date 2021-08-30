/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   test(n)
   {
     string T,F;
     int a,b,c,d,p,q,r,s;
     cin>>T>>F;
     a=T[0]-48;
     b=T[1]-48;
     c=T[3]-48;
     d=T[4]-48;
     int temp=(a*1000)+(b*100)+(c*10)+(d);
     int x;
     cin>>x;
     string T2[x],F2[x],T3[x],F3[x];
     foi(x)
        {
          cin>>T2[i]>>F2[i]>>T3[i]>>F3[i];
          a=T2[0]-48;
          b=T2[1]-48;
          c=T2[3]-48;
          d=T2[4]-48;
          p=T3[0]-48;
          q=T3[1]-48;
          r=T3[3]-48;
          s=T3[4]-48;

            int temp2=((T2[0]-48)*1000)+((T2[1]-48)*100)+((T2[3]-48)*10)+(T2[4]-48);
            if(F2[0]=='P')
            temp2+=1200;
            int temp2=((T3[0]-48)*1000)+((T3[1]-48)*100)+((T3[3]-48)*10)+(T3[4]-48);
            if(F3[0]=='P')
            temp3+=1200;
          if(temp2<=temp && temp>=temp3)
          cout<<'1';
          else
          cout<<'0';
        }

    }
 }
