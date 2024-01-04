/* Bieu dien so thanh tong cac so chan */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 10000007
ll N;

ll binary_pow(ll a, ll b)
{
    ll res = 1;
    while(b)
    {
        if(b&1)
        {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b/=2;
    }
    return res;
}

ll BDS(ll n)
{
    return binary_pow(2, n/2 - 1);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> N;
        if(N&1)
        {
            cout << "-1" << endl;
        }   
        else
            cout << BDS(N) << endl;
    
    }
}