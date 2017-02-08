#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double s, a, h;
    cin >> s >> a;
    h = (- a + sqrt(a * a - 4 * (-2 * s))) / 2;

    cout.precision(2);
    cout << fixed << h << endl;
    return 0;
}
