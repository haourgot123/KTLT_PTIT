#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    string s; cin >> s;
    vector <string> v;
    stringstream ss(s);
    string tmp;
    while(getline(ss,tmp,','))
    {
        v.push_back(tmp);
    }
    stack <string> st;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == "C")
        {
            st.pop();
        }
        else if(v[i] == "+")
        {
            string x= st.top(); st.pop();
            string y = st.top(); st.pop();
            ll z = stoll(x) + stoll(y);
            st.push(y);
            st.push(x);
            st.push(to_string(z));
        }
        else if(v[i] == "D")
        {
            string x = st.top();
            ll z = stoll(x) * 2;
            st.push(to_string(z));
        }
        else st.push(v[i]);
    }
    ll ans = 0;
    while(st.size())
    {
        ans += stoll(st.top());
        st.pop();
    }
    cout << ans << endl;
}


int main()
{
    int t; cin >> t;
    while(t--)
        solve();
}