#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll fib[101];
int n;

void init()
{
    fib[1] = 1;
    fib[2] = 2;
    for(int i = 3; fib[i-1] < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}
void result (int &count, int j , int check)
{
    for(int i = j; i <= 87; i++)
    {
        check += fib[i];
        if(check > n) break;
        if(check < n) result(count, i+1, check);
        if(check == n) count++;
        check -= fib[i];
    }
}



int main()
{
    init();
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        int cnt = 0;
        result(cnt,0,0);
        cout << cnt << endl;
    }
}
