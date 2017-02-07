#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double *a = new double[n];
    int index = 0;
    bool ok = true;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(ok && a[i] <= 2.5){
            index = i;
            ok = false;
        }
    }
    cout.precision(2);
    if(!ok) cout << index + 1 << " " << fixed << a[index] << endl;
    else cout << "Not Found" << endl;

    return 0;
}
