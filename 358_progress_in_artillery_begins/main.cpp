#include <iostream>

using namespace std;

int main()
{
    int num[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    string n;
    cin >> n;
    int sum = 0;
    for(auto i : n){
        sum += num[(int)(i - '0')];
    }

    cout << sum << endl;
    return 0;
}
