#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a[5000001];

void Max_UOC()
{
    for(int i = 2; i <= 500000; i++)
    {
        int n = i;
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
        a[i] = a[i - 1] + v[v.size() - 1];
    }
}


int main()
{
    Max_UOC();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << a[n] << endl;
    }
}