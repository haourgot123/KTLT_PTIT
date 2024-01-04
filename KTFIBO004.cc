#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll fib[92];

void init()
{
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < 92; i++)
    {
        fib[i] = fib[i - 1] + fib[i-2];
    }
}

bool check(ll n)
{
    for(int i = 0; i < 92; i++)
    {
        if(fib[i] == n) return true;
    }
    return false;
}

void result (int n)
{
    for(int i = 91; i >= 0; i--)
    {
        if(fib[i] > n) continue;
        else
        {
            if(check(n - fib[i]))
            {
                cout << n - fib[i] << " " << fib[i] << endl;
                return;
            }
        }
    }
    cout << "-1" << endl;
}

int main()
{
    init();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        result(n);
    }
}