#include <iostream>

using namespace std;

int main()
{
    int p, r, sum = 0, count = 0, min = 2147483647;
    cin >> p >> r;

    for(int i = p; i <= r; i++){
        string s = to_string(i);
        sum = 0;
        for(int j = 0; j < (int)s.size(); j++){
            sum += (int)(s[j] - '0');
        }
        if(min > sum) {
            min = sum;
            count = 1;
        }
        else if(min == sum) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
