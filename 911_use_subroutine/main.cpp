#include <iostream>

using namespace std;

void SumDob(double a, double b){
    cout.precision(4);
    cout << fixed << a + b << " " << a * b << endl;
    return;
}

int main()
{
    int n;
    cin >> n;
    n *= 2;
    double *a = new double[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 1; i < n; i += 2){
        SumDob(a[i - 1], a[i]);
    }
    return 0;
}
