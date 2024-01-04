#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string a; cin >> a;
        ll res = 0;
        ll tmp = 1;
        for(int i = a.length() - 2; i >= 0; i--)
        {
            tmp = tmp * 2;
            res += tmp * (a[i] - '0');
        }
        if(a[a.length() - 1] == '1') res +=1;
        cout << res << endl;
    }
}