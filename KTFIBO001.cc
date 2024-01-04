#include <bits/stdc++.h>
using namespace std;

int fib[43];

void init()
{
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < 43; i++)
    {
        fib[i] = fib[i - 1] + fib[i-2];
    }
}

int result(int n)
{
    int sum  = 0;
    for(int i = 1; i < 43; i++)
    {
        int tmp = fib[i] - fib[i-1];
        if(tmp > 1)
        {
            sum += tmp - 1;
            if(sum >= n)
            {
                return fib[i - 1] + n - (sum - tmp + 1);
            }
        }
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