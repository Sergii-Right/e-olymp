#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int prod = 1;
    for(int i = 0; i < (int)s.size(); i++){
        prod *= (int)(s[i] - '0');
    }
    cout << prod << endl;
    return 0;
}
