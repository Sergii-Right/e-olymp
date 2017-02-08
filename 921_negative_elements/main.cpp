#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    double sum = 0;
    cin >> n;
    double *a = new double[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < 0){
            count++;
            sum += a[i];
        }
    }

    cout.precision(2);
    cout << count << " ";
    cout << fixed << sum << endl;
    return 0;
}
