#include <bits/stdc++.h>
using namespace  std;

vector <int> v;

int minStep(int n)
{
    if(n == 1) return 0;
    if(v[n] != -1)
        return v[n];
    int step = 1 + minStep(n-1);
    if(n%2 == 0) 
        step = min(step, 1 + minStep(n/2));
    if(n%3 == 0)
        step = min(step, 1 + minStep(n/3));
    v[n] = step;
    return step;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        v.resize(n+1, -1);
        cout << minStep(n) << endl;
    }
}