#include <bits/stdc++.h>
#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)
using namespace std;
int main()
{
	ll T;
	cin>>T;
	while(T--)
  {
	    ll n,m;
	    cin>>n>>m;
	    ll john[n],jack[m],total1=0,total2=0;
	    foi(n)
      {
	        cin>>john[i];
	        total1+=john[i];
	    }
	    foj(m)
      {
	        cin>>jack[j];
	        total2+=jack[j];
	    }
	    sort(john,john+n);
	    sort(jack,jack+m);
	    if(total1>total2)
	        cout<<'0'<<'\n';
	    else if(total1<=total2)
			{
	        ll count=0,x=0,y=m-1;
	        while(total1<=total2)
          {
	            total1=0,total2=0;
	            if(john[x]<jack[y])
              {
                  swap(john[x],jack[y]);
	                x++;
	                y--;
	            }
	            else
              {
	                count=-1;
	                break;
	            }
	            foi(n)
	                total1+=john[i];
	            foj(m)
	                total2+=jack[j];
	            count++;
	        }
	        cout<<count<<'\n';
	    }
	    else
      {
	        cout<<"-1"<<'\n';
	    }
	}
}
