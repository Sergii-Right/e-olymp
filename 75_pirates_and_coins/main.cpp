#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, m;
    cin >> a >> m;

    int sum;
    sum = (sqrt(4 * pow(a - 1, 2.) + 8 * m) - 2 * (a - 1)) / 2 - 1;
    cout << sum << endl;
    return 0;
}
