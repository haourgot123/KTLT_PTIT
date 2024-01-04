#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll res = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(m % i != 0) res += i;
            if(i != n/i && m % (n/i) != 0) res += n/i;
        }
    }
    cout << res << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}