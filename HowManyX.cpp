#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int cnt = 0;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'X')
            cnt++;
    }

    cout << cnt << '\n';
    return 0;
}
