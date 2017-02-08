#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, s, p;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    s = fabs(1 / 2. * ((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3)));
    p = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) + sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)) + sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    cout.precision(4);
    cout << fixed << p << " " << s << endl;
    return 0;
}
