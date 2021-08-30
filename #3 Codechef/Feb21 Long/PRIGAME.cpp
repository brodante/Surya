/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;

void input(vector<int> &ar, int n);
void output(vector<int> ar);

vector<char> count_primes(1000001, 0);

void sieve()
{
    int n = 1000000;
    vector<char> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= n; i++) {
        count_primes[i] = count_primes[i-1];
        if (is_prime[i] && (long long)i * i <= n) {
            count_primes[i] += 1;
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    sieve();
test(t)
  {
	    lli x, y; cin>>x>>y;
        if(count_primes[x] > y) cout<<"Divyam";
        else cout<<"Chef";
        cout<<endl;
	}
	return 0;
}


void input(vector<int> &ar, int n){
    int ele;
    for(int i = 0; i< n; i++){cin>>ele; ar.push_back(ele);}
}
void output(vector<int> ar){
    for(auto ele: ar)cout<<ele<<" ";cout<<endl;
}
