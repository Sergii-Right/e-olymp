#include <iostream>

using namespace std;

int main()
{
    int n, max = -1, count = 0;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
            count = 1;
        }
        else if(max == a[i]) count++;
    }

    cout << count << endl;
    return 0;
}
