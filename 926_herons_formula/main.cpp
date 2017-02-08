#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, d, f, p1, p2, s;
    cin >> a >> b >> c >> d >> f;
    p1 = (a + b + f) / 2;
    p2 = (c + d + f) / 2;
    s = sqrt(p1 * (p1 - a) * (p1 - b) * (p1 - f)) + sqrt(p2 * (p2 - c) * (p2 - d) * (p2 - f));

    cout.precision(4);
    cout << fixed << s << endl;
    return 0;
}
