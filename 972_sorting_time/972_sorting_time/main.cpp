//
//  main.cpp
//  972_sorting_time
//
//  Created by Sergii on 05.04.17.
//  Copyright © 2017 Sergii. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int **a = new int*[n];
    for(int i = 0; i < n; i++){
        a[i] = new int[3];
        cin >> a[i][0];
        cin >> a[i][1];
        cin >> a[i][2];
    }
    
    for(int i = 0; i < n - 1; i++){
        for(int j = 1; j < n - i; j++){
            if(a[j - 1][0] > a[j][0]){
                swap(a[j - 1], a[j]);
            }
        }
    }
    
    for(int i = 0; i < n - 1; i++){
        for(int j = 1; j < n - i; j++){
            if(a[j - 1][0] == a[j][0] && a[j - 1][1] > a[j][1]){
                swap(a[j - 1], a[j]);
            }
        }
    }
    
    for(int i = 0; i < n - 1; i++){
        for(int j = 1; j < n - i; j++){
            if(a[j - 1][0] == a[j][0] && a[j - 1][1] == a[j][1] && a[j - 1][2] > a[j][2]){
                swap(a[j - 1], a[j]);
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << a[i][0] << ' ' << a[i][1] << ' ' << a[i][2] << endl;
    }
    return 0;
}
