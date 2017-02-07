#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double *a = new double[n];
    double min = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0){
            min = a[i];
        }
        if(i > 0 && min > a[i]){
            min = a[i];
        }
    }
    cout.precision(2);
    cout << fixed << min * 2 << endl;
    return 0;
}
