#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin >> s;
    stack <string> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ')')
        {
            string tmp = "";
            while(st.size() && st.top() != "(")
            {
                tmp += st.top();
                st.pop();
            }
            reverse(tmp.begin(), tmp.end());
            st.pop();
            st.push(tmp);
        }
        else st.push(string(1,s[i]));
    }
    string res = "";
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