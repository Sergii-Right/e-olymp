#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double *a = new double[n];
    double sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if((i + 1) % 3 == 0 && a[i] > 0){
            sum += a[i];
            count++;
        }
    }
    cout.precision(2);
    cout << count << " ";
    cout << fixed << sum << endl;
    return 0;
}
