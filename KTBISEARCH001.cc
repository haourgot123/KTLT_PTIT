#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    for(int i = 0; i < m; i++)
    {
        int kt = 0;
        for(int j = 0; j < n; j++)
        {
            if(b[i] == a[j])
            {
                cout << j + 1 << " ";
                kt = 1;
                break;
            }
        }
        if(kt == 0) cout << 0 << " ";
    }

}