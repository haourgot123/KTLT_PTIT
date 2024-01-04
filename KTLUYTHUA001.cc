#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string Mul(string a, string b)
{
    int n = a.length();
    int m = b.length();
    string res = "";
    res.assign(m+n,'0');
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for(int i = 0; i < n; i++)
    {
        int nho = 0;
        int j;
        for(j = 0; j < m; j++)
        {
            int tmp = (a[i] - '0') * (b[j] - '0') + nho + (res[i+j] - '0');
            res[i+j] = tmp % 10 + '0';
            nho = tmp / 10;
        }
        if(nho) res[i+j] = nho + '0';
    }
    int len = res.length();
    while(res[len - 1] == '0' && res.length() > 1)
    {
        res.erase(len - 1, len);
    }
    reverse(res.begin(), res.end());
    return res;
}

void solve()
{
   string a;
   cin >> a;
   int n; cin >> n;
   string ans = "1";
   for(int i = 0; i < n; i++)
   {
        ans = Mul(ans, a);
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