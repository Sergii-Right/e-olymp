#include <iostream>

using namespace std;

int main()
{
    int n, countC = 0;
    char c;
    string str;
    cin >> c >> n;

    for(int i = 0; i < n; i++){
        for(int j = i - n + 1; j < i; j++){
            if(j < 0){
                str += ' ';
            }
            else{
                str += c;
            }
            countC++;
        }
        for(int j = 0; j <= i; j++){
            if(j >= 0){
                str += c;
            }
            countC++;
        }
        str += '\n';
    }

    cout << countC << endl;
    cout << str;
    return 0;
}
