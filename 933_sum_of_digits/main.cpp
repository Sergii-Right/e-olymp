#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << abs(n / 10 + n % 10) << endl;
    return 0;
}
