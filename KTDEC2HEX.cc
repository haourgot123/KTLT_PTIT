#include <bits/stdc++.h>
using namespace std;
using ll = long long;

char Hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        vector <char> v;
        if(n == 0) v.push_back('0');
        while(n != 0)
        {
            ll r = n % 16;
            v.push_back(Hex[r]);
            n /= 16;
        }
        reverse(v.begin(), v.end());
        for(char x : v) cout << x;
        cout << endl;
    }   
}