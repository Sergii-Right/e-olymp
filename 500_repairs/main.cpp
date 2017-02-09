#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, w, l, h;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> l >> w >> h;
        a[i] = ceil((l * h * 2 + w * h * 2) / 16.);
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    return 0;
}
