#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long T;
    cin>>T;
    while(T--)
    {
        long long N,K,x,y;
        cin>>N>>K>>x>>y;
        K%=4;
        if(x==y)
        {
            x=N;
            y=N;
        }
        else if(x>y)
        {
            switch(K)
            {
                case 0:x=x-y; //4th hit
                       y=0;
                       break;
                case 1:y=N-x+y;   //actual first hit
                       x=N;
                       break;
                case 2:y=N-x+y; //2nd hit
                       x=N;
                       x=x+y;
                       y=x-y;
                       x=x-y;
                       break;
                case 3:x=x-y; //3rd hit
                       y=0;
                       x=x+y;
                       y=x-y;
                       x=x-y;
                       break;
            }
        }
        else
        {
            switch(K)
            {
                case 0:y=y-x; //4th hit
                       x=0;
                       break;
                case 1:x=N-y+x; //1st hit
                       y=N;
                       break;
                case 2:x=N-y+x; //2nd hit
                       y=N;
                       x=x+y;
                       y=x-y;
                       x=x-y;
                       break;
                case 3:y=y-x; //3rd hit
                       x=0;
                       x=x+y;
                       y=x-y;
                       x=x-y;
                       break;
            }
        }
        cout<<x<<' '<<y<<'\n';
    }
}
