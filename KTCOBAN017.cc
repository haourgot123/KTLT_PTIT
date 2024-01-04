#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n; cin >> n;
    vector<ll> v;
    ll cnt = 0;
    for(ll i = 0; i < n; i++)
    {
        ll x; cin >> x;
        v.push_back(x);
        if(x < 0)
            cnt++;
    }
    if(cnt == n)
    {
        sort(v.begin(), v.end());
        cout << v[n-1] << endl;
         return;
    }
    ll sum1 = 0;
    ll sum2 = 0;
    for(ll i = 0; i < n; i++)
    {
        sum1 += v[i];
        if(sum1 < 0) sum1 = 0;
        sum2 = max(sum2, sum1);
    }
    cout << sum2 << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}