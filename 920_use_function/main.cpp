#include <iostream>

using namespace std;

double min(double x, double y, double z){
    if(x <= y && x <= z){
        return x;
    }
    else if(y <= x && y <= z){
        return y;
    }
    return z;
}

int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    cout.precision(2);
    cout << fixed << min(max(x, y), max(y, z), x + y + z) << endl;
    return 0;
}
