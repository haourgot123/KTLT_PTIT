#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin >> s;
    set <char> se;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= '1' && s[i] <= '9') continue;
        else se.insert(s[i]);
    }
    if(se.size() == 1)
    {
        cout << *se.begin() << endl;
        return;
    }
    int k; cin >> k;
    stack <string> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= '1' && s[i] <= '9')
        {
            string tmp = "";
            while(st.size())
            {
                tmp += st.top();
                st.pop();
            }
            for(int j = 0; j < s[i] - '0'; j++)
                st.push(tmp);
        } 
        else
        {
            st.push(string(1,s[i]));
        }
    }
    string ans = "";
    while(st.size())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans[k-1] << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
}