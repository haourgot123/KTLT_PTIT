#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s1,s2;
    cin >> s1 >> s2;
    vector <int> v1;
    vector <int> v2;
    stringstream ss1(s1);
    stringstream ss2(s2);
    set <int> se;
    string tmp;
    string tmp1;
    while(getline(ss1, tmp,','))
    {
        int x = stoi(tmp);
        se.insert(x);
        v1.push_back(x);
    }
    while(getline(ss2,tmp1,','))
    {
        int x = stoi(tmp1);
        se.insert(x);
        v2.push_back(x);
    }
    vector <int> ans;
    for(int i = 0; i < v1.size(); i++)
    {
        auto it = se.find(v1[i]);
        if(it  != se.end())
        {
            se.erase(it);
            ans.push_back(v1[i]);
        }
    }
    for(int i = 0; i < v2.size(); i++)
    {
        auto it = se.find(v2[i]);
        if(it  != se.end())
        {
            se.erase(it);
            ans.push_back(v2[i]);
        }
    }
    for(int i = 0;i < ans.size(); i++)
    {
        cout << ans[i];
        if(i != ans.size() - 1) cout << ",";
    }
    cout << endl;

}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}