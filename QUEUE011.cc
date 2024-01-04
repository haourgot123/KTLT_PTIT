#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    string s; cin >> s;
    vector <ll> v;
    stringstream ss(s);
    string tmp ;
    while(getline(ss,tmp,','))
    {
        v.push_back(stoll(tmp));
    }
    cout << *min_element(v.begin(), v.end()) << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
}