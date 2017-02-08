#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0, prod = 1;
    for(int i = 0; i < (int)s.size(); i++){
        sum += (int)(s[i] - '0');
        prod *= (int)(s[i] - '0');
    }
    cout.precision(3);
    if(sum == 0) cout << fixed << 0;
    else cout << fixed << (double)prod / sum << endl;
    cout << endl;
    return 0;
}
