#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll binary_pow(ll a, ll b)
{
    if(b == 0)
        return 1;
    ll x = binary_pow(a, b/2);
    if(b%2) return x * x * a % 29;
    else return x * x % 29;
}

int cnt[2004];
void solve()
{
    ll x; cin >> x;
    int tmp = 2004;
    memset(cnt, 0, sizeof(cnt));
    for(int i = 2; i <= tmp; i++)
    {
        while(tmp % i == 0)
        {
            cnt[i] += x;
            tmp /= i;
        }
    }
    ll res = 1;
    for(int i = 2; i <= 2004; i++)
    {
        if(cnt[i])
        {
            res = res * (binary_pow(i,cnt[i] + 1) + 28) * binary_pow(i - 1, 27) % 29;
        }
    }
    cout << res << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    solve();
}