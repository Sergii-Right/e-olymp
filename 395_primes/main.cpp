#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    bool check = true;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            if(a[i] % a[j] == 0){
                check = false;
                break;
            }
        }
        if(check){
            vec.push_back(a[i]);
        }
        check = true;
    }

    for(auto i : vec){
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}
