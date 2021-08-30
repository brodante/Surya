#include <iostream>
#include <cmath>
int main(int argc, char const *argv[])
{
  int n, t, s1=0, s2=0, s3=0;
  std::cin >> n;
  for (size_t i = 0; i < n; i++)
  {
    std::cin >> t;
    if(t%2==0)
      s1+=t/2; //understandable have a nice day
    if(t==1)
      s3++;
    else if(t%2!=0)
      s2+=t;
  }
  if(s2%2==0)
  s2=s2/2;
  else if(s2%2!=0)
  s2=(s2+1)/2;
  std::cout <<s1+s2+s3<<std::endl;
  return 0;
}
