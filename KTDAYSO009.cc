#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin >> s;
    int cnt1 = 0;
    int cnt0 = 0;
    int ans = INT_MIN;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '0')
            cnt0++;
        if(s[i] == '1')
            cnt1++;
        if(cnt0 - cnt1 < 0)
        {
            cnt0 = cnt1 = 0;
        }
        else
        {
            ans = max(ans, cnt0 - cnt1);
        }
    }
    if(ans < 0) ans = -1; 
    cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
}