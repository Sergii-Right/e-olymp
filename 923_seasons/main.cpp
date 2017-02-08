#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    switch (n) {
    case 1:
    case 2:
    case 12:
        cout << "Winter";
        break;
    case 3:
    case 4:
    case 5:
        cout << "Spring";
        break;
    case 6:
    case 7:
    case 8:
        cout << "Summer";
        break;
    case 9:
    case 10:
    case 11:
        cout << "Autumn";
        break;
    }
    cout << endl;
    return 0;
}
