#include <iostream>

using namespace std;

int main()
{
    int m[] = {10, 20, 50, 100, 200, 500};
    int n, count = 0, iter = 5;
    cin >> n;

    while(true){
        if(n == 0) break;
        if(n < 0 || iter < 0){
            count = -1;
            break;
        }
        if(m[iter] <= n){
            n -= m[iter];
            count++;
        }
        else{
            iter--;
        }
    }
    cout << count << endl;

    return 0;
}
