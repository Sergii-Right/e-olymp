#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0; int count = 0;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 6 == 0 && a[i] > 0){
            sum += a[i];
            count++;
        }
    }

    cout << count << " " << sum << endl;
    return 0;
}
