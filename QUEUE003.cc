#include <bits/stdc++.h>
using namespace std;
using ll  = long long;

void solve()
{
    string s; cin >> s;
    int k; cin >> k;
    vector<int> v;
    stringstream ss(s);
    string tmp1;
    while(getline(ss,tmp1,','))
    {
        v.push_back(stoi(tmp1));
    }
    int res = 0;
    while(1)
    {
        int tmp = INT_MAX;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] > 0)
            {
                if(v[i] < tmp) tmp = v[i];
            }
        }
        int cnt = 0;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] >= tmp)
            {
                v[i] -= tmp;
                cnt++;
                if(v[k] == 0)
                {
                    res += tmp * cnt;
                    cout << res << endl;
                    return;
                }
            }
        }
        res += tmp * cnt;
    }

}


int main()
{
    int t; cin >> t;
    while(t--)
        solve();
}