#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
  if (a == 0) return b;
  return gcd(b % a, a);
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

bool isPossible(int n) {
  if (n == 1) return false;

  // Check if n has two distinct factors
  int distinct_factors = 0;
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      distinct_factors++;
      if (distinct_factors >= 2) {
        return true;
      }
      n /= i;
      if (n % i == 0) {
        return false; // n has a repeated factor
      }
    }
  }

  // n is prime or has only one factor
  return distinct_factors >= 2;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (!isPossible(n)) {
      cout << "-1\n";
    } else {
      bool found = false;
      for (int a = 1; a * a <= n; ++a) {
        if (n % a == 0) {
          int b = n / a;
          if (gcd(a, b) > 1) {
            continue;
          }
          int c = n / lcm(a, b);
          found = true;

          // Ensure a <= b
          if (b < a) {
            swap(a, b);
          }

          cout << a << " " << b << " " << c << "\n";
          break;
        }
      }
      if (!found) {
        cout << "-1\n";
      }
    }
  }
  return 0;
}
