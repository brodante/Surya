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
     int countX=0,countO=0,X=0,O=0,temp=0;
     char t[3][3];
     foi(3)
     {
       foj(3)
       {
         cin>>t[i][j];
         if(t[i][j]=='X')
         X++;
         else if(t[i][j]=='O')
         O++;
         else
         temp++;
        }
      }
   if(t[0][0]=='X'&&t[1][0]=='X'&&t[2][0]=='X')
       countX = 1;
   if(t[0][1]=='X'&&t[1][1]=='X'&&t[2][1]=='X')
       countX = 1;
   if(t[0][2]=='X'&&t[1][2]=='X'&&t[2][2]=='X')
       countX = 1;
   if(t[0][0]=='X'&&t[1][1]=='X'&&t[2][2]=='X')
       countX = 1;
   if(t[0][2]=='X'&&t[1][1]=='X'&&t[2][0]=='X')
       countX = 1;
   if(t[0][0]=='X'&&t[0][1]=='X'&&t[0][2]=='X')
       countX = 1;
   if(t[1][0]=='X'&&t[1][1]=='X'&&t[1][2]=='X')
       countX = 1;
   if(t[2][0]=='X'&&t[2][1]=='X'&&t[2][2]=='X')
       countX = 1;
   if(t[0][0]=='O'&&t[1][0]=='O'&&t[2][0]=='O')
       countO = 1;
   if(t[0][1]=='O'&&t[1][1]=='O'&&t[2][1]=='O')
       countO = 1;
   if(t[0][2]=='O'&&t[1][2]=='O'&&t[2][2]=='O')
       countO = 1;
   if(t[0][0]=='O'&&t[1][1]=='O'&&t[2][2]=='O')
       countO = 1;
   if(t[0][2]=='O'&&t[1][1]=='O'&&t[2][0]=='O')
       countO = 1;
   if(t[0][0]=='O'&&t[0][1]=='O'&&t[0][2]=='O')
       countO = 1;
   if(t[1][0]=='O'&&t[1][1]=='O'&&t[1][2]=='O')
       countO = 1;
   if(t[2][0]=='O'&&t[2][1]=='O'&&t[2][2]=='O')
       countO = 1;
   if((countX==1&&countO==1)||X-O>1||X-O<0)
        cout<<"3\n";
    else if(X==0&&O==0&&temp==9)
        cout<<"2\n";
    else if(countX==1&&countO==0&&X>O)
        cout<<"1\n";
    else if(countX==0&&countO==1&&X==O)
        cout<<"1\n";
    else if(countX==0&&countO==0&&temp==0)
        cout<<"1\n";
    else if(countX==0&&countO==0&&temp>0)
        cout<<"2\n";
    else
        cout<<"3\n";

   }
}
