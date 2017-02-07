#include <iostream>

using namespace std;

int main()
{
    double x, y;
    int quarter = 0;
    cin >> x >> y;
    if(x > 0 && y > 0){
        quarter = 1;
    }
    else if(y > 0 && x < 0){
        quarter = 2;
    }
    else if(y < 0 && x < 0){
        quarter = 3;
    }
    else if(x > 0 && y < 0){
        quarter = 4;
    }
    cout << quarter << endl;
    return 0;
}
