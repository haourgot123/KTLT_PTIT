#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 10000007

struct Matrix
{
    ll f[2][2];
};

Matrix operator * (Matrix A, Matrix B)
{
    Matrix C;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            C.f[i][j] = 0;
            for(int k = 0; k < 2; k++)
            {
                C.f[i][j] = (C.f[i][j] + (A.f[i][k] * B.f[k][j]) % MOD) % MOD; 
            }
        }
        
    }
    return C;
}

Matrix Bina_pow(Matrix A, int n)
{
    if(n == 1) return A;
    Matrix X = Bina_pow(A, n/2);
    if(n%2 == 1) return X * X * A;
    else return X*X;
}

ll result(int n)
{
    Matrix A;
    A.f[0][0] = 1;
    A.f[0][1] = 1;
    A.f[1][0] = 1;
    A.f[1][1] = 0;
    Matrix D = Bina_pow(A,n);
    return D.f[0][1];
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << result(n) << endl;
    }
}