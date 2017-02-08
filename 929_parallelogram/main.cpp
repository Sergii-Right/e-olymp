#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a == b && c == d) || (a == c && b == d) || (a == d && b == c)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << endl;
    return 0;
}
