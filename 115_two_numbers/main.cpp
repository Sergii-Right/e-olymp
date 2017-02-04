#include <iostream>

using namespace std;
long factorial(int n){
    long f = 1;
    if(n < 2)
        return f;
    for(;n > 1; n--){
        f *= n;
    }
    return f;
}

int main()
{
    int n, sum = 1;
    cin >> n;


    cout << factorial(n) / factorial(n - 2) << endl;

    return 0;
}
