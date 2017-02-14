#include <iostream>


using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int k = 0; k < t; k++){
        int n, m;
        cin >> n >> m;
        int **a = new int*[n];
        int **a1 = new int*[n];
        int *x = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = new int[n];
        }
        for(int i = 0; i < n; i++){
            a1[i] = new int[n];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
               a1[i][j] = 0;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }

        for(int i = 0; i < n; i++){
            cin >> x[i];
        }

        //do it A ^ m
//        for(int l = 0; l < m; l++){
//            for(int i = 0; i < n; i++){
//                for(int j = 0; j < n; j++){
//                    a1[i][j] += a[i][j] * a[j][i];
//                }
//            }
//        }

        //x0 = A ^ m * xi
        int xv = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                xv += a1[i][j] * x[j];
            }
        }

        cout << xv << endl;
    }

    return 0;
}
