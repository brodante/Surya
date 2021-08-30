#include<bits/stdc++.h>
#include<cmath>
int main()
{
int N,K,T,temp;
std::cin>>T;
for (size_t k = 0; k < T; k++)
  {
  std::cin >> N>>K;
  int W[N];
    for (size_t j = 0; j < N; j++)
    {
      std::cin>>W[j];
    }
    std::sort(W,W+N);
    int sum1=0,sum2=0;
    temp=std::min(K,N-K);
    for (size_t j = 0; j < N; j++)
    {
      if(j<temp)
      sum1+=W[j];
      if(j>=temp)
      sum2+=W[j];
    }
    std::cout<<sum2-sum1;
   }
}
