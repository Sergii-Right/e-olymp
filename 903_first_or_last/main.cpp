#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if((int)(s[0] - '0') > (int)(s[s.size() - 1] - '0')){
        cout << s[0];
    }
    else if((int)(s[0] - '0') == (int)(s[s.size() - 1] - '0')){
        cout << '=';
    }
    else{
        cout << s[s.size() - 1];
    }
    cout << endl;
    return 0;
}
