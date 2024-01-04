#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MAX 100001

int dp[MAX];

void solve()
{
    int N;
    cin >> N;
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    for(int i = 1; i <= N; i++)
    {
        for(int j = i; j <= N; j++)
        {
            dp[j] = (dp[j] + dp[j - i]) % MOD;
        }
    }
    cout << dp[N] % MOD - 1 << endl;
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
}