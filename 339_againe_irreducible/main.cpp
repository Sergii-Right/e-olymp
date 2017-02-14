#include <iostream>
#include <vector>

using namespace std;

int euclid(int a, int b){
    while (true) {
        int c = a % b;
        if(c == 0) break;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n, sum = 0;
    vector<int> vec;
    while (true) {
        cin >> n;
        if(n == 0) break;
        for(int i = 1; i < n; i++){
            if(euclid(n, i) == 1){
                sum++;
            }
        }
        vec.push_back(sum);
        sum = 0;
    }

    for(int i : vec){
        cout << i << endl;
    }

    return 0;
}
