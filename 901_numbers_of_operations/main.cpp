#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 1; i < (int)s.size(); i++){
        switch (s[i]) {
        case '+':
        case '-':
        case '*':
            switch (s[i - 1]){
            case '+':
            case '-':
            case '*':
                sum -= 1;
            }
            sum += 1;
        }
    }
    cout << sum << endl;
    return 0;
}
