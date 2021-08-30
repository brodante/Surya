#include<bits/stdc++.h>
#include<cmath>
int main()
{
  long int N,k,I,G,Q,T,i,j,sum=0;
  std::cin >> T;
  for (size_t i = 0; i < T; i++)
  {
      std::cin >> G;
      for (size_t j = 0; j < G; j++)
      {
          std::cin >> I >> N >> Q;
          int coins[N];
          for (size_t k = 0; k < N; k++)
            {
              int H=0;
              coins[k]=I;
              while (H<=k)
              {
                if (coins[H]==1)
                  coins[H]=2;
                else if (coins[H]==2)
                  coins[H]=1;
                H++;
              }
            }
          for (size_t k = 0; k < N; k++)
          {
            if(coins[k]==Q)
              sum++;
          }
      std::cout << sum << '\n';
      sum=0;
    }
  }
}
