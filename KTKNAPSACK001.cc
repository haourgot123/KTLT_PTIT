#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n,W;
    cin >> n >> W;
    int a[n+1], c[n+1], dp[n+1][W+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> c[i];
    memset(dp,0, sizeof(dp));
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= W; j++)
        {
            // Neu k chon do vat thu i
            dp[i][j] = dp[i-1][j];
            //neu chon do vat thu i 
            if(j >= a[i])
            {
                dp[i][j] = max(dp[i][j], dp[i-1][j-a[i]] + c[i]);
            } 
        }
    }
    cout << dp[n][W] << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}