#include <iostream>

#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll mod = 10000;
    ll ans = 1;
    for (ll i = 2; i <= n; i++)
    {
        ans = (i * ans) % mod;
    }
    if (ans == 0)
        cout << "0000" << endl;
    else
        cout << ans << endl;

    return 0;
}