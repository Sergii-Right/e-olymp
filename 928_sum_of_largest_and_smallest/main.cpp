#include <iostream>

using namespace std;

int main()
{
    int n, min = 0, max = 0;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0){
            min = a[i];
            max = a[i];
        }
        else{
            if(min > a[i]) min = a[i];
            if(max < a[i]) max = a[i];
        }
    }

    cout << min + max << endl;
    return 0;
}
