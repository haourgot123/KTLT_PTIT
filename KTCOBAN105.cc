#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD  1000000007


void solve()
{
    ll n;
    cin >> n;
    ll x;
    priority_queue<ll, vector<ll>, greater<ll>> a;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        a.push(x);
    }
    ll res = 0; 
    while(a.size() > 1)
    {
        ll val1 = a.top(); a.pop();
        ll val2 = a.top(); a.pop();
        ll tmp = (val1 + val2) % MOD;
        a.push(tmp);
        res += tmp;
        res %= MOD;
    }
    cout << res%MOD << endl;

}


int main()
{
    int t; cin >> t;
    while(t--)
    solve();
}