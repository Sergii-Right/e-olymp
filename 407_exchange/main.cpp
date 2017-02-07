#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char ch[3] = {'G', 'C', 'V'};
    int m;
    cin >> m;
    int *k = new int[m];
    for(int i = 0; i < m; i++){
        cin >> k[i];
    }
    sort(k, k+m);

    int max = k[m-1];
    int j = 0;
    cout << max << endl;
    for(int i = 0; i < max; i++){
        swap(ch[1], ch[2]);
        swap(ch[0], ch[1]);
        if(i == k[j] - 1){
            for(int l = 0; l < 3; l++){
                cout << ch[l];
            }
            cout << endl;
            j++;
        }
    }
    return 0;
}
