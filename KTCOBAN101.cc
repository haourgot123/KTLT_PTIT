#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int arr[10] = {0};
    int a,b;
    cin >> a >> b;
    if (a > b) swap(a,b);
    for(int i = a; i <= b; i++)
    {
        string tmp = to_string(i);
        for(int j = 0; j < tmp.length(); j++)
        {
            arr[tmp[j] - '0']++;
        }
    }
    for(int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int t ; cin >> t;
    while(t--) solve();
}