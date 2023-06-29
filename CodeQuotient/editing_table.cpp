#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    int m;
    cin>>m;
    int lo=*max_element(arr,arr+n);
    int hi=accumulate(arr,arr+n,0);
    while (lo<hi)
    {
        int mid=(lo+hi)>>1,temp=1,tempTime=0;
        for (int i=0;i<n;i++)
        {
            if(tempTime+arr[i]<=mid)
                tempTime+=arr[i];
            else
            {
                temp++;
                tempTime=arr[i];
            }
        }
        if(temp<=m)
            hi=mid;
        else
            lo=mid+1;
    }
    cout<<lo<<endl;
    return 0;
}
