#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 1;
    int n;
    int ans = 1;
    cin >> n;

    for (int k = 1; k <= (n - 2); k++)
    {
        ans = i + j;
        i = j;
        j = ans;
    }
    cout << ans << endl;

    return 0;
}