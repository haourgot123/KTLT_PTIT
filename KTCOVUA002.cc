#include <bits/stdc++.h>
using namespace std;

int N, X[100], cot[100], d1[100], d2[100];
int ans;

void Try(int i)
{
    for(int j = 1; j <= N; j++)
    {
        if(cot[j] == 1 && d1[i - j + N] == 1 && d2[i + j - 1] == 1)
        {
            X[i] = j;
            cot[j] = d1[i - j + N] = d2[i + j - 1] = 0;
            if(i == N)
            {
                ans++;
            }
            else 
            {
                Try(i+1);
            }
            cot[j] = d1[i - j + N] = d2[i + j - 1] = 1;
        }

    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        for(int i = 1; i < 100; i++)
            cot[i] = d1[i] = d2[i] = 1;
        ans = 0;
        cin >> N;
        Try(1);
        cout << ans << endl;
    }
}