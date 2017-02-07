#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double *a = new double[n];
    double max = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < 0) a[i] = fabs(a[i]);
        if(max < a[i]) max = a[i];
    }
    cout.precision(2);
    cout << fixed << max << endl;

    return 0;
}
