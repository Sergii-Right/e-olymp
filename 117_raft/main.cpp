#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool srt(int a, int b){
    return a > b;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end(), srt);

    int sum = 0, sumMax = 0, min = 0;
    while (vec.size() > 1) {
        min = vec[0];
        for(int i = 0; i < (int)vec.size(); i++){
            sum += vec[i];
            if(min > vec[i]) min = vec[i];
        }
        sum /= m;
        if(sumMax < sum && sum <= min){
            sumMax = sum;
            break;
        }
        if(sum > min){
            sum = 0;
            for(int i = (int)vec.size() - 1; i >= 0; i--){
                if(vec[i] == min){
                    vec.erase(vec.begin() + i);
                }
                else break;
            }
        }
    }
    cout << sumMax << endl;

    return 0;
}
