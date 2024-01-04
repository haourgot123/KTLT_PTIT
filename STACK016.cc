#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin >> s;
    stack <string> st;
    map <string, int > mp;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            string tmp = st.top();
            st.pop();
            st.push(tmp + s[i]);
        }
        else if(s[i] >= '2' && s[i] <= '9')
        {
            if(st.top() == ")")
            {
                st.pop();
                vector<string> v;
                while(st.size() && st.top() != "(")
                {
                    v.push_back(st.top());
                    st.pop();
                }
                st.pop();
                for(int j = 0; j < v.size() ; j++)
                {
                    for(int k = 1; k <= s[i] - '0'; k++)
                    {
                        st.push(v[j]);
                    }
                }
            }
            else
            {
                string tmp = st.top();
                st.pop();
                for(int j = 1; j <= s[i] - '0'; j++) st.push(tmp);
            }
        }
        else st.push(string(1,s[i]));
    }
    while(st.size())
    {
        mp[st.top()]++;
        st.pop();
    }
    for(auto it : mp)
    {
        if(it.second == 1) cout << it.first;
        else cout << it.first << it.second;
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
}