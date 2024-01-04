#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
int fib[92];

void init()
{
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < 92; i++)
    {
        fib[i] = fib[i - 1] + fib[i-2];
    }
}

ll result (int n)
{
    ll sum = 0;
    for(int i = 0; i < 92; i++)
    {
        if(fib[i] <= n)
        {
            if(fib[i] % 2== 0) sum += fib[i];
        }
        else
            return sum;
    }
}

int main()
{
    init();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << result(n) << endl;
    }
}