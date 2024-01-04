#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MAX 100001
using ll = long long;

void solve()
{
    ll n,k;
    cin >> n >> k;
    ll dp[k+1][n+1];
    for(int i = 0; i <= n; i++)
        dp[1][i] = 1;
    for(int i = 2; i <= k; i++)
    {
        ll sum = dp[i - 1][0];
        dp[i][0] = dp[i - 1][0];
        for(int j = 1; j <= n; j++)
        {
            sum += dp[i-1][j];
            dp[i][j] = sum;
        }
    }
    cout << dp[k][n] << endl;
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
}