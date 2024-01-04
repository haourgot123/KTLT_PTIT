#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int fibo[43] = {0};

void init()
{
    fibo[0] = 1;
    fibo[1] = 2;
    for(int i = 2; i <= 42; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}

int cnt(int n, int k, int index)
{
    if(k == 0) return n == 0;
    int sum = 0;
    for(int i = index; i>= 0 && fibo[i] * k >= n; i--)
    {
        if(fibo[i] > n) continue;
        sum += cnt(n - fibo[i], k - 1, i);
    }
    return sum;
}


int main()
{
    init();
    int t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        cout << cnt(n,k,42) << endl;
    }
}