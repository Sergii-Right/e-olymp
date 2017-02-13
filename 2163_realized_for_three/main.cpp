#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long double n;
    cin >> n;
    if(fmodl(n, 3) == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << endl;
    return 0;
}
