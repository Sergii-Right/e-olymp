#include <iostream>

using namespace std;

int main()
{
    int n, p, v, nk;
    cin >> n;

    p = v = nk = n / 3;

    v += p / 2 + nk / 2;
    p /= 2; nk /= 2;

    nk += v / 2 + p / 2;
    v /= 2; p /= 2;

    p += v / 2 + nk / 2;
    v /= 2; nk /= 2;

    cout << p << ' ' << v << ' ' << nk << endl;
    return 0;
}
