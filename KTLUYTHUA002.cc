#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
using ll  = long long;
ll bPow(ll a, ll b)
{
    ll res = 1;
    while(b)
    {
        if(b&1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    res %= MOD;
    return res;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    ll x = 0;
    ll y = 0;
    for(int i = 0; i < a.length(); i++)
    {
        x= (x * 10 + a[i] - '0') % MOD;
    }
    for(int i = 0; i < b.length(); i++)
    {
        y = (y * 10 + b[i] - '0') % (MOD - 1);
    }
    ll res = bPow(x % MOD, y % (MOD - 1));
    cout << res % MOD << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}