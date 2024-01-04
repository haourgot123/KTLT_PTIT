#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum(ll n)
{
    ll res = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            res += i;
            if(i != n/i) res += n/i;
        }
    }
    return res - n;
}

void solve()
{
    ll a,b;
    cin >> a >> b;
    if(sum(a) == b && sum(b) == a)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}

