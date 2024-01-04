#include<bits/stdc++.h>
using namespace std;

int f[300][300];
int n, l, r;

struct qwe
{
    int x;
    int y;
};
qwe str[5000000];

void push(int x, int y)
{
    r++;
    str[r].x = x;
    str[r].y = y;
}

int mu10(int x)
{
    int res = 1;
    for(int i = 1; i <= x; i++) res = (res * 10) % n;
    return res;
}
void in(int x, int y)
{
    for(int i = 0; i < x; i++) cout << "8";
    for(int i = 0; i < y; i++) cout << "6";
    cout << endl;
}
void solve()
{
    cin >> n;
    l =  r = 1;
    for(int i = 0; i <= 201; i++)
        for(int j = 0; j <= 201; j++)
            f[i][j] = -1;
    f[0][0] = 0;
    str[1].x= 0;
    str[1].y = 0;
    int check = 0;
    while(l <= r)
    {
        int x = str[l].x, y = str[l].y;
        if(x+y > 0  && f[x][y] == 0)
        {
            in(x,y);
            check = 1;
            break;
        }
        if(y+1 <= 200 && f[x][y+1] == -1 )
        {
            push(x, y+1);
            f[x][y+1] = (f[x][y] * 10 + 6) % n;
        }
        if(x+1 <= 200 && f[x+1][y] == -1)
        {
            push(x+1, y);
            f[x+1][y] = (8 * mu10(x+y) %n + f[x][y] % n) % n;
        } 
        if(x+y > 200)
        break;
        l++;
    }
    if(check == 0) cout << "-1" << endl;

}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}