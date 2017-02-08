#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, p, s, h1, h2, h3;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    h1 = 2 * s / a;
    h2 = 2 * s / b;
    h3 = 2 * s / c;
    cout.precision(2);
    cout << fixed << h1 << ' ' << h2 << ' ' << h3 << endl;
    return 0;
}
