#include <iostream>

using namespace std;

int main()
{
    long Sum, k = 0;
    double ev;
    cin >> Sum;
    while(true){
        ev = k - Sum * 2. / (k + 1);
        if(ev >= 0 && ev <= 2){
            break;
        }
        k++;
    }

    cout << k << endl;
    return 0;
}
