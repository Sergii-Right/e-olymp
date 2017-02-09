#include <iostream>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, a;
    cin >> x1 >> y1 >> x2 >> y2 >> a;
    x3 = (x1 + a * x2) / (1 + a);
    y3 = (y1 + a * y2) / (1 + a);
    cout.precision(2);
    cout << fixed << x3 << ' ' << y3 << endl;
    return 0;
}
