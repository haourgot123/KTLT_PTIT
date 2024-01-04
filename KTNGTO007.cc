#include <bits/stdc++.h>
using namespace std;
using ll  = long long;

ll find(int n)
{
    vector <ll> v;
    while(n % 2 == 0)
    {
        v.push_back(2);
        n /=2;
    }
    while(n % 3 == 0)
    {
        v.push_back(3);
        n /= 3;
    }
    for(int i = 5; i <= sqrt(n); i += 6)
    {
        while(n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
        while(n % (i+2) == 0)
        {
            v.push_back(i+2);
            n /= (i+2);
        }
    }
    if(n) v.push_back(n);
    sort(v.begin(), v.end());
    return v[v.size() - 1];
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        ll tmp = INT_MIN;
        int ans;
        for(int i = a; i <= b; i++)
        {
            if(find(i) >= tmp)
            {
                tmp = find(i);
                ans = i;
            }   
        }
        cout << ans << endl;
    }
}