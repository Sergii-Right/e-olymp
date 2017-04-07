//
//  main.cpp
//  3261_simple_multipliers
//
//  Created by Sergii on 06.04.17.
//  Copyright © 2017 Sergii. All rights reserved.
//

#include <iostream>

using namespace std;
char r[10000000];
int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    int max = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(max < a[i]) max = a[i];
    }
    
    
    for(int i = 0; i < max; i++){
        r[i] = '1';
    }
    for(int i = 2; i < max; i++){
        if(r[i] == '1'){
            unsigned long long m = i * i;
            for(unsigned long long j = m; j < max; j += i){
                r[j] = '0';
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        string str = "";
        int val = 1, num = a[i];
        if(a[i] == 1 || a[i] == 0){
            cout << a[i] << endl;
            continue;
        }
        for(int j = 2; j <= a[i]; j++){
            if(j > num) break;
            if(r[j] == '1' && num % j == 0 && a[i] >= j && val < a[i]){
                val *= j;
                num /= j;
                if(str.length() > 0)
                    str += " * ";
                str += to_string(j);
                j--;
            }
        }
        cout << str << endl;
        str = "";
    }
    
    return 0;
}
