#include <iostream>

using namespace std;

int main()
{
    int n, m = -1;
    cin >> n;
    int *a = new int[n];
    int *am = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        am[i] = 1;
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                am[i]++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(am[i] > n / 2){
            m = a[i];
            break;
        }
    }

    cout << m << endl;

    return 0;
}
