#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    int D = A - B;
    int count = 0;
    while (D != 0)
    {
        D = D / 10;
        count++;
    }
    int S = A - B;
    D = S % 10;

    if (D == 1 || D == 9)
    {
        S = S / 10;
        S = S * 10 + 5;
    }
    else if (D % 2 == 0)
    {
        S = S / 10;
        S = S * 10 + 1;
    }
    else if (D % 2 == 1)
    {
        S = S / 10;
        S *= 10;
    }
    if (S == 0)
        S = 1;
    cout << S;
}
