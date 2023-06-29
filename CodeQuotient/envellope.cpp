#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for(long long i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        pq.push(x);
    }
    long long ans=0;
    while(pq.size()>1)
    {
        long long a=pq.top();
        pq.pop();
        long long b=pq.top();
        pq.pop();
        long long sum=a+b;
        ans+=sum;
        pq.push(sum);
    }
    cout<<ans<<endl;
    return 0;
}
