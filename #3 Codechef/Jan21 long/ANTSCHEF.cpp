#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        lli a[m];
        for (int i=0;i<m;i++)
            cin>>a[i];
        lli countneg=0, countpos=0, sum=0;
        if(n==1)
        {
            sort(a,a+m);
            if(a[0]>0)
              cout<<0<<endl;
            else if(a[m-1]<0)
              cout<<0<<endl;
            else
            {
                for(int i=0;i<m;i++)
                    if(a[i]>0)
                    {
                      countneg=i;
                      countpos=m-i;
                      break;
                    }
                while (countneg>0 && countpos>0)
                {
                    sum=sum+countneg+countpos-1;
                    countneg--;
                    countpos--;
                }
                cout<<sum<<endl;
            }
        }
    }
	return 0;
}
