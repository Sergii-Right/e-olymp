#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, a, b, c, f1, f2, f3, so, sf1, sf2, sf3, po, pf1, pf2, pf3;
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;
    cin >> x3 >> y3 >> z3;
    cin >> x4 >> y4 >> z4;

    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
    b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2) + pow(z2 - z3, 2));
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2) + pow(z1 - z3, 2));
    f1 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2) + pow(z1 - z4, 2));
    f2 = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2) + pow(z2 - z4, 2));
    f3 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2) + pow(z3 - z4, 2));

    po = (a + b + c) / 2;
    pf1 = (a + f1 + f2) / 2;
    pf2 = (b + f2 + f3) / 2;
    pf3 = (c + f1 + f3) / 2;

    so = sqrt(po * (po - a) * (po - b) * (po - c));
    sf1 = sqrt(pf1 * (pf1 - a) * (pf1 - f1) * (pf1 - f2));
    sf2 = sqrt(pf2 * (pf2 - b) * (pf2 - f2) * (pf2 - f3));
    sf3 = sqrt(pf3 * (pf3 - c) * (pf3 - f1) * (pf3 - f3));

    cout.precision(1);
    cout << fixed << so + sf1 + sf2 + sf3 << endl;
    return 0;
}
