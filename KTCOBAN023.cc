#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll logX(ll n, ll p)
{
    return floor(log(n)/log(p));
}

void solve()
{
    ll n,p;
    cin >> n >> p;
    ll ans = 0;
    ll tmp = 1;
    for(int i = 1; i <= logX(n,p); i++)
    {
        tmp *= p;
        ans = ans  + n/tmp;
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