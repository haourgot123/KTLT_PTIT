#include <bits/stdc++.h>
using namespace std;

bool result(string s)
{
    stack <char> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        if(s[i] == ')' && st.top() == '(') st.pop();
        if(s[i] == ']' && st.top() == '[') st.pop();
        if(s[i] == '}' && st.top() == '{') st.pop();
    }
    if(st.size()) return false;
    else return true;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(result(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}