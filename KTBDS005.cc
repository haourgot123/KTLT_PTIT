#include <bits/stdc++.h>
using namespace std;

int cnt_res(int n, int i)
{
    int tmp = n - i*i;
    if(tmp == 0) return 1;
    if(tmp < 0) return 0;
    int a = cnt_res(tmp, i);
    int b = cnt_res(n, i+1);
    return a + b;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << cnt_res(n,1) << endl;
    }
}
