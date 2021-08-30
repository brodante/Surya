#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
int X;
float Y;
cin>>X;
cin>>Y;
if(0<X && X<=2000 && X<=Y-0.50 && X%5==0 && 0<=Y && Y<=2000)
  cout<<setprecision(2)<<fixed<<Y-X-(0.50);
else
  cout<<setprecision(2)<<fixed<<Y;
}
