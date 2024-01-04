#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    string s; cin >> s;
    stringstream ss(s);
    string tmp;
    vector <ll> v;
    queue <ll> q;
    while(getline(ss, tmp, ','))
    {
        v.push_back(stoll(tmp));
    }
    q.push(v[0]);
    for(int i = 1; i < v.size(); i++)
    {
        if(q.front() < v[i])
        {
            q.pop();
            q.push(v[i]);
        }
    }
    cout << q.front() << endl;

}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
}