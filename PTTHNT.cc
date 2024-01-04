#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v;
    for(int i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            v.push_back(i);
            n/= i;
        }
    }
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}