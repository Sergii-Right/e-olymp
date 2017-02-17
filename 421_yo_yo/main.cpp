#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    double n, k;
    cin >> n >> k;
    while (n > 1) {
        n /= k;
        if(n <= 1) break;
        count++;
    }
    cout << count << endl;
    return 0;
}
