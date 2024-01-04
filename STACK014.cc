#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string s; cin >> s;
    int cnt1, cnt2, cnt3;
    cnt1 = cnt2 = cnt3 = 0;
    for(int i = 0; i < s.size(); i++ )
    {
        if(s[i] == 'a') cnt1++;
        if(s[i] == 'b') cnt2++;
        if(s[i] == 'c') cnt3++;
    }
    if(cnt1 != cnt2 || cnt1 != cnt3 || cnt2 != cnt3)
    {
        cout << "0" << endl;
        return;
    }
    stack <char> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'b' && st.size() && st.top() == 'a')
        {
            st.pop();
            st.push('b');
        }
        else if(s[i] == 'c' && st.size() && st.top() == 'b')
        {
            st.pop();
        }
        else st.push(s[i]);
    }    
    if(st.size()) cout << "0" << endl;
    else cout << "1" << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}