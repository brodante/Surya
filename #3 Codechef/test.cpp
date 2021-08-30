#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while (T--)
    {
        string s, first, last;
        cin >> s;
        float size = s.size();
        first = s.substr(0, size/2);
        last = s.substr(ceil(size/2),size);
        cout<<"size"<<s.size()<<" and "<<size/2;
        cout<<"Mid="<<size<<" and "<<ceil(size)<<endl;
        cout << "first=" << first << endl;
        cout << "last=" << last << endl;
    }
}
