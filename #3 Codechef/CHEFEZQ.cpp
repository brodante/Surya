#include <iostream>
#define lli long long int
using namespace std;
int main()
{
  lli TestCases, n, k, count=0,j;
  cin >> TestCases;
  lli * op = new lli[TestCases];
  for (int i = 0; i < TestCases; i++)
  {
    count=0;
    cin >> n;
    cin >> k;
    lli * q = new lli[n];
    for (j = 0; j < n; j++)
    {
      cin >> q[j];
      count+=q[j];
      if(k>count)
      { cout<<j+1;
        break;
      }
    }
    if (count%k==0 && j!=1)
    {
      op[i] = count/k;
    }
    else if(count%k!=0 && j!=0)
      op[i] = (count/k)+1;
    if(k==1 && j!=1)
    {
      op[i] = (count/k)+1;
    }
  }
  for (int i = 0; i < TestCases; i++)
 {
cout <<"XXXXX" <<op[i]<<' ';
}
  return 0;
}
