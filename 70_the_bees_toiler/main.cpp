#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct xyz{
    int a[3] = {0};
};

int main()
{
    int k, n, nk, nd, ndq;

    cin >> k >> n;

    nk = 1 + (k - 1) * 6 * k / 2;
    nd = k * 2 - 1;
    ndq = nd * nd;

    int iter = 1;
    int itr = -nd + k;
    int itl = nd - k;
    int **arr = new int*[nd];
    for(int i = 0; i < nd; ++i)
        arr[i] = new int[nd];
    for(int i = nd - 1; i >= 0; i--){
        for(int j = 0; j < nd; j++){
            arr[i][j] = 0;
        }
    }
    for(int i = nd - 1; i >= 0; i--){
        for(int j = itl > 0 ? itl : 0; itr > 0 ? j < nd - itr : j < nd; j++){
            arr[i][j] = iter;
            iter++;
        }
        itr++;
        itl--;
    }

    iter = 1;
    itr = -nd + k;
    itl = nd - k;
    vector<xyz> vert(ndq);

    for(int i = nd - 1; i >= 0; i--){
        for(int j = itl > 0 ? itl : 0; itr > 0 ? j < nd - itr : j < nd; j++){
            if(iter > 0){
                if(j < nd - 1){
                    vert[iter].a[0] = arr[i][j + 1];
                }
                else{
                    vert[iter].a[0] = 0;
                }
                if(i > 0){
                    vert[iter].a[1] = arr[i - 1][j];
                    if(j > 0){
                        vert[iter].a[2] = arr[i - 1][j - 1];
                    }
                    else{
                        vert[iter].a[2] = 0;
                    }
                }
                else{
                    vert[iter].a[1] = 0;
                    vert[iter].a[2] = 0;
                }
            }
            iter++;
        }
        itr++;
        itl--;
    }

    int sum = 0;
    vector<int> vec;
    vec.push_back(1);
    for(int i = 1; i <= nk; i++){
        int k = count(vec.begin(), vec.end(), i);
        if(k > 0){
            for(; k > 0; k--){
                for(int j = 0; j < 3; j++){
                    if(vert[i].a[j] == 0){
                        continue;
                    }
                    if(vert[i].a[j] == n){
                        sum += 1;
                        continue;
                    }
                    vec.push_back(vert[i].a[j]);
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
