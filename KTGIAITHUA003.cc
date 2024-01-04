#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll log5(ll n)
{
    return floor(log(n)/log(5));
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n ; cin >> n;
        ll res = 0;
        for(int i = 1; i <= log5(n); i++)
        {
            res += n/pow(5,i);
        }
        cout << res << endl;
    }
}