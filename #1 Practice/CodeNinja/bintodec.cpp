#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
    long long int n,temp,i=0,ans=0;
    cin>>n;
    while(n!=0)
    {
        temp=n%10;
        if(temp)
            ans+=pow(2,i);
        i++;
    	n/=10;
    }
	cout<<ans;
}
