//
//  main.cpp
//  1462_shrewd_sorting
//
//  Created by Sergii on 01.04.17.
//  Copyright © 2017 Sergii. All rights reserved.
//

#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 1; j < n; j++){
            if(a[j - 1] % 10 > a[j] % 10){
                std::swap(a[j - 1], a[j]);
            }
            else if(a[j - 1] % 10 == a[j] % 10)
            {
                if(a[j - 1] > a[j]){
                    std::swap(a[j - 1], a[j]);
                }
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        std::cout << a[i] << ' ';
    }
    return 0;
}
