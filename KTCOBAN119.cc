#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int ans = 0;
        for(int i = 0; i <= n; i++)
        {
            int tmp = i;
            int cnt = 0;
            while(tmp > 0)
            {
                if(tmp % 2 == 0) cnt++;
                tmp /= 2;
            }
            if(cnt == k) ans++;
        }
        cout << ans << endl;
    }
}