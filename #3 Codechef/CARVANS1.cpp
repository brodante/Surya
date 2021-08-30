#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        int A[N];
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        int count = 0;
        int min = 0;
        for (int i = 0; i < N; ++i)
        {
            if (i == 0)
            {
                min = A[i];
                count += 1;
            }
            else if (A[i] <= min)
            {
                count += 1;
                min = A[i];
            }
        }
        cout << count << endl;
    }
}
