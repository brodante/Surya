#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end(), greater<int>());

    long long revenue = 0;
    for (int i = 0; i < n; i++) {
        revenue += (i+1) * (long long)prices[i];
    }

    cout << revenue << endl;

    return 0;
}
