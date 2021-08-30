#include <bits/stdc++.h>
#define lli long long
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;
int main()
{
    test(t)
    {
        double h,c,t;
        int grade;
        cin>>h>>c>>t;
    bool f1 = ((h > 50) ? (1) : (0));
    bool f2 = ((c < 0.7) ? (1) : (0));
    bool f3 = ((t > 5600) ? (1) : (0));
        if (f1 && f2 && f3)
            grade = 10;
        else if (f1 && f2)
            grade = 9;
        else if (f2 && f3)
            grade = 8;
        else if(f1 &&  f3)
            grade = 7;
        else if (f1 || f2 || f3)
            grade = 6;
        else
            grade = 5;
        cout<<grade<<"\n";
    }
}
