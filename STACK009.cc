#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin >> s;
    stack <string> st;
    for(int i =0; i < s.size(); i++)
    {
        if(s[i] == ']')
        {
           string tmp ="";
           while(st.size() && st.top() != "[")
           {
                tmp += st.top();
                st.pop();
           }
           st.pop();
           string num = "";
           while(st.size() && st.top() >= "1" && st.top() <= "9")
           {
                num += st.top();
                st.pop();
           }
           reverse(num.begin(), num.end());
           for(int j = 1; j <= stoi(num); j++)
           {
                st.push(tmp);
           }


        }
        else st.push(string(1,s[i]));

    }
    string ans = "";
    while(st.size())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}