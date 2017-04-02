//
//  main.cpp
//  2664_library_method
//
//  Created by Sergii on 01.04.17.
//  Copyright © 2017 Sergii. All rights reserved.
//

#include <iostream>
using namespace std;

void InsertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int v = a[i], j = i;
        bool check = false;
        while(v < a[j - 1] && j > 0){
            a[j] = a[j - 1];
            j--;
            check = true;
        }
        a[j] = v;
        if(check){
            for(int i = 0; i < n; i++){
                cout << a[i] << ' ';
            }
            cout << endl;
        }
        check = false;
    }
}

int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    InsertionSort(a, n);
    
    return 0;
}
