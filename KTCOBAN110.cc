#include <bits/stdc++.h>
using namespace std;

int n;
long long res;
int v[] = {2,3,5,7,11,13,17,19};

void Try(int i, long long ans, long long uoc)
{
    if(uoc > n)
        return;
    if(uoc == n)
        res = min(res,ans);
    for(int j=1;;j++)
    {
        if(ans * v[i] > res) break;
        ans = ans * v[i];
        Try(i+1, ans, uoc * (j+1));
    }
}

void solve()
{
    cin >> n;
    res = 1e18;
    Try(0,1,1);
    cout << res << endl; 
}

int main()
{
    int t; cin >> t;
    while(t--)
    solve();
}

// #include <bits/stdc++.h>
// using namespace std;
// using ull = unsigned long long;
// ull inf = 1e15;

// ull cnt(ull x)
// {
//     ull res = 0;
//     for(ull i = 1; i <= sqrt(x); i++)
//     {
//         if(x % i == 0)
//         {
//             if(i == x/i) res +=1;
//             else res += 2;
//         }
//     }
//     return res;
// }

// int main()
// {
//     int t; cin >> t;
//     while(t--)
//     {
//         ull n; cin >> n;
//         for(ull i = n; i < inf; i++)
//         {
//             if(cnt(i) == n)
//             {
//                 cout << i << endl;
//                 break;
//             }
//         }
//     }
// }