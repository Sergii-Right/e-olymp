#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double d, p, pf, s, v, h, a;
    cin >> d >> p;
    pf = (d + p + p) / 2;
    s = sqrt(pf * (pf - d) * (pf - p) * (pf - p)) * 4 + d * d;
    a = sqrt(2) * d / 2;
    h = sqrt(pow(p, 2) - pow(a, 2));
    v = (h * d * d) / 3;
    cout.precision(3);
    cout << fixed << s << ' ' << v << endl;
    return 0;
}
