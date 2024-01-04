#include <bits/stdc++.h>
using namespace std;

int result(string s)
{
    int cnt = 0;
    stack <char> st;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.size() == 0)
            {
                st.push('(');
                cnt++;
            }
            else
                st.pop();
        }
    }
    return cnt + st.size()/2;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << result(s) << endl;
    }
}