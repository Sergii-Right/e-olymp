#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r1, r2, s;
    cin >> s >> r1;
    r2 = sqrt(r1 * r1 - s / M_PI);

    cout.precision(2);
    cout << fixed << r2 << endl;

    return 0;
}
