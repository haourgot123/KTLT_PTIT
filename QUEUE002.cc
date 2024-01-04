#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string a,b;
    cin >> a >> b;
    int k = 0;
    vector<int> v1;
    vector<int> v2;
    queue <int> q;
    for(int i = 0; i < a.size(); i++) if(a[i] != ',') v1.push_back(a[i] - '0');
    for(int i = 0; i < b.size(); i++) if(b[i] != ',') v2.push_back(b[i] - '0');
    for(int i = 0; i < v1.size(); i++) q.push(v1[i]);
    for(int i = 0; i < v2.size(); i++)
    {
        while(q.front()  != v2[i])
        {
            int x = q.front();
            q.pop();
            k++;
            q.push(x);
            if(k == q.size())
            {
                cout << q.size() << endl;
                return;
            }
        }
        q.pop();
        k = 0;
    }
    cout << q.size() << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
}