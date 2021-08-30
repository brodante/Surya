#include<bits/stdc++.h>
#include<cmath>
int main()
{
int T,i,G,j,I,N,Q,first;
std::cin >> T;
for (size_t i = 0; i < T; i++)
{
    std::cin >> G;
    for (size_t j = 0; j < G; j++)
    {
        std::cin >> I >> N >> Q;
        if(N%2!=0)
          first=(N-1)/2;
        else if(N%2==0)
          first=N/2;
        if (I==1 && Q==1)
            std::cout<<first<<'\n';
        if(I==1 && Q==2)
            std::cout<<N-first<<'\n';
        if (I==2 && Q==1)
            std::cout<<N-first<<'\n';
        if (I==2 && Q==2)
            std::cout<<first<<'\n';
      }
  }
}
