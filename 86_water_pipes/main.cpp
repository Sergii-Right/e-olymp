#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Coords{
    int x;
    int y;
};

int main()
{
    int n;
    cin >> n;
    vector<Coords> vec(n);
    int **weight = new int*[n];
    for(int i = 0; i < n; i++){
        weight[i] = new int[n]{};
    }

    for(int i = 0; i < n; i++){
        cin >> vec[i].x >> vec[i].y;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            weight[i][j] = sqrt(pow(vec[i].x - vec[j].x, 2) + pow(vec[i].y - vec[j].y, 2));
        }
    }


    int sum = 0;
    for(int i = 0; i < n; i++){
        int min = 0;
        for(int j = 0; j < n; j++){
            if(min == 0){
                min = weight[i][j];
            }
            if(min > weight[i][j] && weight[i][j] != 0)
                min = weight[i][j];
        }
        for(int j = 0; j < n; j++){
            if(min != weight[i][j]){
                weight[i][j] = 0;
            }
        }
        sum += min;
    }

    cout << sum << endl;


    return 0;
}
