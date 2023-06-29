#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    unordered_map<int, int> freq;
    int num,c,ans=0;
    for (int i=0;i<n;i++)
    {
        cin>>num;
        c=s-num;
        ans+=freq[c];
        freq[num]++;
    }
    cout<<ans<<endl;
    return 0;
}
