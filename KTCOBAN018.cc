#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll log2(ll n)
{
    return floor(log(n)/log(2));
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        ll tmp = 1;
        for(int i = 1; i <= log2(n); i++)
        {
            tmp *= 2;
            ans += n/tmp;
        }
        cout << ans << endl;
    }
}