#include "bits/stdc++.h"
#include <string>

using namespace std;

int main()
{
    string st;
    cin >> st;

    if (!st.empty())
    {
        st[0] = toupper(st[0]); // Correct way to convert to uppercase
    }
    string ans = "";
    ans += st[0];
    for (int i = 1; i < st.size(); i++)
    {
        if (st[i] == 's')
            ans += '$';
        else if (st[i] == 'i')
            ans += '!';
        else if (st[i] == 'o')
            ans += "()";
        else
            ans += st[i];
    }
    ans += '.';

    cout << ans << endl;
}