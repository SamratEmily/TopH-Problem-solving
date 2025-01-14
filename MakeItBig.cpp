#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string st;
        cin >> st;

        int n = st.size();

        string ans = "";
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    for(int l = k+1; l < n; l++)
                    {
                        string temp = st;
                        swap(temp[i], temp[j]);
                        swap(temp[k], temp[l]);

                        ans = max(ans, temp);
                    }
                }
            }
        }
        cout << ans << endl;
    }
}