#include <bits/stdc++.h>
using namespace std;

bool check(int n, int i)
{
    int x = pow(4,i);
    if(x > n) return false;
    if(x == n) return true;
    if (x < n) return check(n, i + 1);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << check(n,1) << endl;
    }
}