#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d1, v1, d2, v2,days=0,vac=0;
    float p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    while(vac<p)
    { days++;
      if(days==d1)
      {
        vac+=v1;
        d1++;
      }
      if(days==d2)
      {
        vac+=v2;
        d2++;
      }
    }
    cout<<days;
}
