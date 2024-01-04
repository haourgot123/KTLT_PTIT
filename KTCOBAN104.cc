#include <bits/stdc++.h>
using namespace std;




int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b;
        int min,max;
        cin >> a >> b;
        string s1, s2;
        s1 = to_string(a);
        s2 = to_string(b);
        min = max =  a + b;
        for(int i = 0; i < s1.length(); i++)
        {
            if(s1[i] == '5')
            {
                min -= 2 * pow(10,s1.length() - i - 1);
            }
            if(s1[i] == '3')
            {
                max  += 2 *pow(10, s1.length() - i - 1);
            }
        }
        for(int i = 0; i < s2.length(); i++)
        {
            if(s2[i] == '5')
            {
                min -= 2 * pow(10,s2.length() - i - 1);
            }
            if(s2[i] == '3')
            {
                max  += 2 *pow(10,s2.length() - i - 1);
            }
        }
        cout << min << " " << max << endl;
        

    }
}