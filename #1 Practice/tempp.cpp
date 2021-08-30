/*Code by Surya a.k.a Sunny*/
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
using namespace std;

// Find all subsequences
void printSubsequence(string input, string output, string B)
{
	// Base Case
	// if the input is empty print the output string
	if (input.empty()) {
    if(B==output)
    {
    cout<<"POSITIVE\n";
		//cout << output << endl;
  }
		return;
	}

	// output is passed with including
	// the Ist characther of
	// Input string
	printSubsequence(input.substr(1), output + input[0], B);

	// output is passed without
	// including the Ist character
	// of Input string
	printSubsequence(input.substr(1), output, B);
}

// Driver code
int main()
{
  string V;
  cin>>V;
  test(n);
  {
    string B;
    cin>>B;
	// output is set to null before passing in as a
	// parameter
	string output ="";
	string input = "CORONAVIRUS";
  printSubsequence(input, output,B);
  return 0;
}
}
