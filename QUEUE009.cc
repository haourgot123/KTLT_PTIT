#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    int k;
    cin >> s >> k;
    stringstream ss(s);
    string tmp;
    vector<string> v;
    deque <string> q;
    while(getline(ss,tmp,','))
    {
        v.push_back(tmp);
    }
    for(int i = 0; i < v.size(); i++)
    {
        if(i < k)
        {
            q.push_front(v[i]);
        }
        else q.push_back(v[i]);
    }
    string ans ="";
    while(q.size())
    {
        ans += q.front() + ",";
        q.pop_front();
    }
    for(int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i];
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
}