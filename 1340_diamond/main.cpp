#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        if(n == 0) break;
        n--;
        for(int i = n; i >= 0; i--){
            for(int j = 0 - i; j < n - i + 1; j++){
                if(j < 0){
                    cout << ' ';
                }
                else {
                    cout << '*';
                }
            }
            for(int j = n - i - 1; j > 0 - i - 1; j--){
                if(j >= 0){
                    cout << '*';
                }
                else break;
            }
            cout << endl;
        }
        for(int i = 1; i < n + 1; i++){
            for(int j = 0 - i; j < n - i + 1; j++){
                if(j < 0){
                    cout << ' ';
                }
                else{
                    cout << '*';
                }
            }
            for(int j = n - i - 1; j > 0 - i - 1; j--){
                if(j >= 0){
                    cout << '*';
                }
                else break;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
