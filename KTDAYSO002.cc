#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N,K,S, a[25];
int X[100];
ll res;
void cnt()
{
    ll tmp = 0;
    for(int i = 1; i <= K; i++)
    {
        tmp += a[X[i] - 1];
    }
    if(tmp == S) res++;
}
void Try(int i)
{
    for(int j = X[i - 1] + 1; j <= N-K+i ; j++)
    {
       X[i] = j;
       if(i == K)
       {
            cnt();
       }
       else 
       {
            Try(i + 1);
       }
    }
}


void solve()
{
    cin >> N >> K >> S;
    res = 0;
    X[0] = 0;
    for(int i = 0; i < N; i++) cin >> a[i];
    Try(1);
    cout << res << endl;

}


int main()
{
    int t; cin >> t;
    while(t--) solve();
}