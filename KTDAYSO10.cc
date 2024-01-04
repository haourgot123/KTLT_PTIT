#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
void solve()
{
    int N, L;
    cin >> N >> L;
    L += N-1;
    ll s = L;
    for(int i = 0; i < N - 1; i++)
    {
        int x; cin >> x;
        s += L - 1;
        L--;
        s -= x;
    }
    cout << s << endl;

}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
}