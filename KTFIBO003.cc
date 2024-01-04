#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
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

ll result(int n)
{
   while(1)
   {
        n = n+1;
        int kt = 1;
        for(int i = 0; i < 92; i++)
        {
            if(fib[i] == n)
            {
                kt = 0;
                break;
            }
        }
        if(kt) return n;
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