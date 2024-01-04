#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector <int> v;
    set <int> se;
    stringstream ss(s);
    string tmp;
    while(getline(ss,tmp,','))
    {
        int x = stoi(tmp);
        v.push_back(x);
        se.insert(x);
    }
    for(int i = 0;; i++)
    {
        if(se.size() == 0)
        {
            cout << i << endl;
            return;
        }
        else
        {
            auto it = se.find(i);
            if(it != se.end())
            {
                se.erase(it);
            }
            else
            {
                cout << i << endl;
                return;
            }
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--) 
    {
        solve();
    }
}