#include <bits/stdc++.h>
using namespace std;
using ll = long long;


    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int X,Y,M;
            cin >> X >> Y >> M;
            int ans = 0;
            int tmp = M/X;
            ans += tmp;
            int du = 0;
            while(tmp != 0)
            {
                tmp = tmp + du;
                ans = ans + tmp / Y;
                du = tmp % Y;
                tmp /= Y;

            }
            cout << ans << endl;
        }
    }