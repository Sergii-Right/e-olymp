#include <iostream>

using namespace std;

int main()
{
    unsigned long long s, m, h, d;
    cin >> s;
    m = s / 60;
    h = s / 60 / 60;
    d = s / 60 / 60 / 24;
    h -= d * 24;
    m = m - h * 60 - d * 24 * 60;
    s = s - m * 60 - h * 60 * 60 - d * 24 * 60 * 60;
    cout << d  << ' ' << h << ' ' << m << ' ' << s << endl;
    return 0;
}
