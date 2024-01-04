#include <bits/stdc++.h>
using namespace std;

int cnt_res(int n, int k)
{
    if(n == 0)
        return 1;
    if(k == 0)
        return 1;
    if(n >= pow(2,k))
    {
        int value = pow(2,k);
        return cnt_res(n - value, k) + cnt_res(n, k - 1);
    } 
    else
    {
        return cnt_res(n, k - 1);
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int k = log2(n);
        cout << cnt_res(n,k) << endl;
    }
}