#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> factorVec;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    factorVec.push_back(a[0]);
    for(int i = 1; i < a[0]; i++){
        if(a[0] % i == 0){
            factorVec.push_back(i);
        }
    }

    int maxGcd = 1;
    bool ok = true;
    for(int i = 0; i < (int)factorVec.size(); i++){
        for(int j = 1; j < n; j++){
            if(a[j] % factorVec[i] != 0){
                ok = false;
                break;
            }
        }
        if(ok){

            maxGcd *= factorVec[i];
        }
        ok = true;
    }

    cout << maxGcd << endl;
    return 0;
}
