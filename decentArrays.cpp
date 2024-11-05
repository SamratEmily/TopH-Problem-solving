#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        v2[i] = v1[i];
        /* code */
    }

    sort(v2.begin(), v2.end());

    if (v1 == v2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}