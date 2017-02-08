#include <iostream>

using namespace std;

int main()
{
    int n, c, count = 0;
    double p;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c >> p;
        if(p < 50){
            count += c;
        }
    }

    cout << count << endl;
    return 0;
}
