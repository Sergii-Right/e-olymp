#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n >> i >> j;
    int **arr = new int*[n];
    for(int k = 0; k < n; k++){
        arr[k] = new int[n];
    }

    for(int iter = 0, k = 1; iter < n - 2; iter++){
        for(int x = iter; x < n - iter; x++){
            arr[iter][x] = k++;
        }
        for(int x = iter + 1; x < n - iter; x++){
            arr[x][n - iter - 1] = k++;
        }
        for(int x = n - iter - 2; x > iter; x--){
            arr[n - iter - 1][x] = k++;
        }
        for(int x = n - iter - 1; x > iter; x--){
            arr[x][iter] = k++;
        }
    }
    cout << arr[i - 1][j - 1] << endl;
    return 0;
}
