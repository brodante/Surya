#include<bits/stdc++.h>
#include<cmath>
int main()
{
int T,i,G,j,I,N,Q;
std::cin >> T;
for (size_t i = 0; i < T; i++)
{
    std::cin >> G;
    for (size_t j = 0; j < G; j++)
    {
        std::cin >> I >> N >> Q;
        if(N%2!=0)
          {
              if (Q==I)
                std::cout << (N-1)/2 << '\n';
              if(Q!=I)
              std::cout << (N+1)/2 << '\n';
          }
        else if(N%2==0)
        std::cout << N/2 << '\n';
      }
  }
}
