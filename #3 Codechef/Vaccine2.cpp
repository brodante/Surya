#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N,T,i,j;
  double D;
  float count,count2;
  cin>>T;
  for (i = 0; i < T; i++)
   {
    count=0;
    cin>>N;
    int a[N];
    cin>>D;
    for ( j = 0; j < N; j++)
       {
        cin>>a[j];
        if(a[j]>=80 || a[j]<=9)
          count++;
        }
        count2=N-count;
        cout<<(ceil(count/D))+(ceil(count2/D))<<endl;
  }
}
