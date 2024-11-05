#include "bits/stdc++.h"

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int f = 0;
    while (a and b)
    {
        if ((a % 10 + b % 10) >= 10)
        {
            f = 1;
            break;
        }
        a /= 10;
        b /= 10;
    }

    if (f)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}