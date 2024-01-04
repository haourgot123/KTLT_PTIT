#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[3] = {-1,-1,-1};
int dy[3] = {-1, 0, 1};

int main()
{
    int t ; cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++) cin >> a[i][j];
        int dp[n][m];
        memset(dp,0,sizeof(dp));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
            {
                if(i == 0) dp[i][j] = a[i][j];
                else
                {
                    for(int k = 0; k < 3; k++)
                    {
                        int i_moi = i + dx[k];
                        int j_moi = j + dy[k];
                        if(j_moi >= 0 && j_moi <= m - 1)
                        {
                            dp[i][j] = max(dp[i][j], dp[i_moi][j_moi] + a[i][j]);
                        }
                    }
                }
            }
        int res = INT_MIN;
        for(int j = 0; j < m; j++)
        {
            if(res < dp[n - 1][j]) res = dp[n-1][j];
        }
        cout << res << endl;
    }
}