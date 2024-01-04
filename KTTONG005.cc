#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int k,S;
    cin >> k >> S;
    ll res = 0;
    for(int i = 0; i <= k; i++)
    {
        ll tmp = S - i;
        for(int j = 0; j <= k; j++)
        {
            if((tmp - j <= k) && (tmp - j >= 0))
                res++;
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