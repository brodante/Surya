#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=12345;
int c=n%10;
while(n>10)
{
n=n/10;
}
cout<<n+c;
}
