#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4, px, py, d1, d2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;
    d1 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    d2 = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));
    px = ((x1 * y3 - y1 * x3) * (x2 - x4) - (x1 - x3) * (x2 * y4 - y2 * x4)) / ((x1 - x3) * (y2 - y4) - (y1 - y3) * (x2 - x4));
    py = ((x1 * y3 - y1 * x3) * (y2 - y4) - (y1 - y3) * (x2 * y4 - y2 * x4)) / ((x1 - x3) * (y2 - y4) - (y1 - y3) * (x2 - x4));
    cout.precision(3);
    cout << fixed << px << ' ' << py << endl;
    cout << d1 << ' ' << d2 << endl;
    return 0;
}
