#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin >> s;
    vector <int> v;
    stringstream ss(s);
    string tmp1;
    while(getline(ss,tmp1,','))
    {
        v.push_back(stoi(tmp1));
    }
    stack <int> st;
    for(int i = 0; i < v.size(); i++)
    {
        st.push(v[i]);
        for(int j = i + 1; j < v.size(); j++)
        {
            if(st.top() >= v[j])
            {
                int x =st.top();
                st.pop();
                st.push(x - v[j]);
                break;
            }
        }
    }
    vector <int> ans;
    while(st.size())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if(i != ans.size() - 1) cout << ",";
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
}