#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for(int i = 0; i <=9; i++){
        for(int j = 0; j <= 9; j++){
            for(int k = 0; k <= 9; k++){
                if(i + j + k == n){
                    sum++;
                }
            }
        }
    }
    cout << sum * sum << endl;
    return 0;
}
