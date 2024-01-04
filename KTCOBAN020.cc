#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    ll n; cin >> n;
    ll ans = 1;
    string s = to_string(n);
    for(int i = 0; i < s.length(); i++)
        ans *=(s[i] - '0');
    for(int i = s.length() - 1; i >= 1; i--)
    {
        ll tmp = 1;
        if(s[i] != '9')
        {
            s[i] = '9';
            if(s[i - 1] != '0') s[i-1] -= 1;
            for(int i = 1; i < s.length(); i++) tmp *= (s[i] - '0');
            if(s[0] != '0') tmp *= (s[0]-'0');
            ans = max(ans, tmp);
        }
    }
    cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
}