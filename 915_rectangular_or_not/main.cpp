#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int d;
    cin >> a >> b >> c;
    if(a >= b && a >= c){
        d = b * b + c * c;
        if(a * a == d){
            cout << "YES";
        }
        else cout << "NO";
    }
    else if(b >= a && b >= c){
        d = a * a + c * c;
        if(b * b == d){
            cout << "YES";
        }
        else cout << "NO";
    }
    else if(c >= a && c >= b){
        d = a * a + b * b;
        if(c * c == d){
            cout << "YES";
        }
        else cout << "NO";
    }
    cout << endl;
    return 0;
}
