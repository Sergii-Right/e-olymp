#include <iostream>

using namespace std;

void merge(int a[], int p, int q, int r){
    int p1 = p, q1 = q + 1, i = 0;
    int *arr = new int[r - p + 1];

    while(p1 <= q && q1 <= r){
        if(a[p1] > a[q1]) arr[i++] = a[q1++];
        else arr[i++] = a[p1++];
    }
    while (p1 <= q) arr[i++] = a[p1++];
    while (q1 <= r) arr[i++] = a[q1++];

    for(int j = 0; j <= r - p; j++){
        a[p + j] = arr[j];
    }
}

void merge_sort(int a[], int p, int r){
    if(p >= r) return;
    int q = (p + r) / 2;
    merge_sort(a, p, q);
    merge_sort(a, q + 1, r);
    merge(a, p, q, r);
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    merge_sort(a, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
