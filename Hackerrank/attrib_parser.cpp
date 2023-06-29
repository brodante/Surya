/*Code by rubb3rducky*/
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pb push_back
#define eb emplace_back
#define pi 3.14159265358979323846
#define MOD 1000000007
#define unbuffer cin.clear();cin.sync();
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i,a,b) for(int i=(a);i<=(b);i++)
using namespace std;
//using namespace boost::multiprecision;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,q,i;
cin>>n>>q;
string temp;
vector<string>h;
vector<string>quer;
cin.ignore();

for (i = 0; i < n; i++) {
    getline(cin, temp);
    h.eb(temp);
}
for (i = 0; i < q; i++) {
    getline(cin, temp);
    quer.eb(temp);
}

unordered_map<string,string>m;
vector < string > tag;

for (i = 0; i < n; i++) {
    temp = h[i];
    temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
    temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());

    if (temp.substr(0, 2) == "</") {
        tag.pop_back();
    } else {
        stringstream ss;
        ss.str("");
        ss << temp;
        string t1, p1, v1;
        char ch;
        ss >> ch >> t1 >> p1 >> ch >> v1;
        string temp1 = "";
        if (tag.size() > 0) {
            temp1 = * tag.rbegin();
            temp1 = temp1 + "." + t1;
        } else
            temp1 = t1;
        tag.eb(temp1);
        m[ * tag.rbegin() + "~" + p1] = v1;
        while (ss) {
            ss >> p1 >> ch >> v1;
            m[ * tag.rbegin() + "~" + p1] = v1;
        }
    }

}

for (i = 0; i < q; i++) {
    if (m.find(quer[i]) == m.end())
        cout << "Not Found!\n";
    else
        cout << m[quer[i]] << endl;
}
return 0;

}
