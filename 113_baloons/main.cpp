#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, sum = 0, max = 0;
    cin >> n;
    int *a = new int[n];
    set<int> st;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        st.insert(a[i]);
    }
    for(int i : st){
        for(int j = 0; j < n; j++){
            if(a[j] == i){
                sum++;
            }
        }
        if(max < sum){
            max = sum;
        }
        sum = 0;
    }
    cout << n - max << endl;

    return 0;
}
