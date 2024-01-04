#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
    map <int, int> mp;
    cin >> n >> m;
    int b[m];
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(mp[x] == 0)
        {
            mp[x] = i + 1;
        }
    }
    for(int i = 0; i < m; i++) cin >> b[i];
    for(int i = 0; i < m; i++)
    {
        auto it = mp.find(b[i]);
        if(it == mp.end())
        {
            cout << "0" << " ";
        }
        else
        {
            cout << it->second << " ";
        }
    }
}