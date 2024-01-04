#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MAX 100001
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll dp[k+1][n+1];
    dp[1][0] = 0;
    for(int i = 1; i <= n; i++)
        dp[1][i] = 1;
    for(int i = 2; i <= k; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            ll sum = 0;
            for(int k = 0; k < j; k++)
            {
                sum += dp[i-1][k];
            }
            dp[i][j] = sum;
        }
    }
    cout << dp[k][n] << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
}