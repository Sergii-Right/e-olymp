#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = n - 1; i >= 0; i--){
        cout << 'a';
        for(int j = 0 - i; j < n - i; j++){
            if(j < 0){
                cout << ' ';
            }
            else{
                cout << char(97 + j);
            }
        }
        cout << endl;
    }
    return 0;
}
