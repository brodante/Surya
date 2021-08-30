#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
  int N, K, T;
  std::cin >> T;
  for (size_t i = 0; i < T; i++)
  {
    std::cin >> N >> K;
    long int W[N], child=0, parent=0, count=0, total=0;
    for (size_t j = 0; j < N; j++)
    {
      std::cin >> W[j];
    }
    for (long int I = 0; I < N-1; I++)
    {
      for (long int J = 0; J < N-I-1; J++)
      {
        if (W[J] > W[J+1])
          std::swap(W[J], W[J+1]);
      }
    }
    for (size_t k = K; k < N; k++)
    {
      parent+=W[k];
    }
    for (size_t m = 0 ; m < K ; m++)
    {
      child+=W[m];
    }
    for (size_t l = 0; l < count; l++)
    {
      total+=W[l];
    }
  //  std::cout<<std::abs(parent-child)<<std::endl;
      std::cout << std::max(std::abs(parent-child), std::abs(child-parent)) << '\n';
    //std::cout<<std::max(std::abs(parent-(total-parent)),std::abs(child-(total-child))) <<std::endl;
  }
  return 0;
}
