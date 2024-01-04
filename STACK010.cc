#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n; cin >> n;
    stack <ll> st;
    char d[4] = {'*', '/', '+', '-'};
    int a[n];
    for(int i = 0; i < n; i++) a[i]  = n - i;
    int k = 0;
    st.push(a[0]);
    for(int i = 1; i < n; i++)
    {
        if(d[k] == '*')
        {
            ll x = st.top();
            st.pop();
            st.push(x * a[i]);
        }
        else if(d[k] == '/')
        {
            ll x = st.top();
            st.pop();
            st.push(x / a[i]);
        }
        else if(d[k] == '+')
        {
            ll x = st.top();
            st.pop();
            st.push(x + a[i]);
        }
        else if(d[k] == '-')
        {
            st.push(a[i] * -1);
        }
        k++;
        if(k == 4) k = 0;
    }
    ll ans = 0;
    while(st.size())
    {
        ans += st.top();
        st.pop();
    }
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