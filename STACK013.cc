#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string s; cin >> s;
    if(s[s.size() - 1] != '/') s += '/';
    stack <char> st;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '.')
        {
            st.push(s[i]);
            cnt++;
        }
        else if(s[i] == '/')
        {
            if(st.size() && st.top() == '/') {}
            else if(st.size() && st.top() == '.' && (cnt == 1 || cnt == 2))
            {
                int dem = 0;
                while(st.size() && dem != cnt)
                {
                    if(st.top() == '/') dem++;
                    st.pop();
                }
                cnt = 0;
                st.push(s[i]);
            }
            else st.push(s[i]);
        }
        else st.push(s[i]);
    }
    string res = "";
    if(st.top() == '/' && st.size() > 1) st.pop();
    while(st.size())
    {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}