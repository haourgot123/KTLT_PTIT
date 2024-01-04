#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll ans = 1;
    for(int i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            ans = (ans*5) %MOD;
        }
        else
        {
            ans =  (ans*4) %MOD;
        }
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