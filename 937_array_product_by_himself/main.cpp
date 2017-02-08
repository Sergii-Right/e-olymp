#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int countZero = 0;
    int prod = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(countZero >= 2){
            continue;
        }
        if(a[i] == 0) {
            countZero++;
        }
        if(countZero < 2 && a[i] != 0) {
            prod *= a[i];
        }
        else if(countZero >= 2){
            prod = 0;
        }
    }

    for(int i = 0; i < n; i++){
        if(countZero == 1 && a[i] == 0){
            a[i] = prod;
        }
        else if(countZero == 0){
            a[i] = prod / a[i];
        }
        else{
            a[i] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}
