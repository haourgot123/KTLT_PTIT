#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--) 
    {
        string s; cin >> s;
        stack <char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '*')
            {
                st.pop();
            }
            else st.push(s[i]);
        }
        string res ="";
        while(st.size())
        {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
    }
}