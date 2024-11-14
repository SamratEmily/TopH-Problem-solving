#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int ans = x - (y % x);

    cout << ans << endl;

    return 0;
}