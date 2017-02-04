#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int average;
    if((a > b && a < c) || (a < b && a > c)){
        average = a;
    }
    if((c > b && c < a) || (c < b && c > a)){
        average = c;
    }
    if((b > a && b < c) || (b < a && b > c)){
        average = b;
    }

    cout << average << endl;
    return 0;
}
