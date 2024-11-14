#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;

    string st;
    cin.ignore();
    getline(cin, st);

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == ' ')
            continue;

        if (st[i] >= 'a' && st[i] <= 'z')
        {
            st[i] = ((st[i] - 'a' - n + 26) % 26) + 'a';
        }
        else if (st[i] >= 'A' && st[i] <= 'Z')
        {
            st[i] = ((st[i] - 'A' - n + 26) % 26) + 'A';
        }
    }
    cout << st << endl;

    return 0;
}