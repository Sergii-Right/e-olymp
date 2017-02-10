#include <iostream>

using namespace std;

int main()
{
    int n, iter = 0;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(a[j] < a[j - 1]){
                swap(a[j], a[j - 1]);
                iter++;
            }
        }
    }

    cout << iter << endl;
    return 0;
}
