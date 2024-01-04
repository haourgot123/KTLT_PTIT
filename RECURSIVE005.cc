#include <iostream>
using namespace std;

double solve(double x, int n)
{
    if(n == 0) return 1;
    return x* solve(x,n-1);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        double x; 
        int n;
        cin >> x >> n;
        cout << solve(x,n) << endl;
    }
}