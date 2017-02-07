#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a >= 1 && a <= 3){
        cout << "Initial";
    }
    else if(a >= 4 && a <= 6){
        cout << "Average";
    }
    else if(a >= 7 && a <= 9){
        cout << "Sufficient";
    }
    else if(a >= 10 && a <= 12){
        cout << "High";
    }
    cout << endl;
    return 0;
}
