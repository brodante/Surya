#include <iostream>
using namespace std;
void seive(int a[], int n)
{
    for(int i=1;i<n;i++)
        a[i]=0;
    for(int i=2;i<n;i++)
    {
        for(int j=2;j<i;j++)
            if(i%j==0)
                a[i]=1;
    }
}
int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  int n;
    cin>>n;
    int a[n];
    seive(a,n);
    for(int i=2;i<=n;i++)
        if(!a[i])
            cout<<i<<'\n';
}
