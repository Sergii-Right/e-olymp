//
//  main.cpp
//  1071_unreachable_number
//
//  Created by Sergii on 31.03.17.
//  Copyright © 2017 Sergii. All rights reserved.
//

#include <iostream>
#include <algorithm>

int main(int argc, const char * argv[]) {
    int n;
    std::cin >> n;
    long *arr = new long [n];
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    std::sort(arr, arr + n);
    long count = 0;

    if(arr[0] == 1){
        count++;
        for(int i = 1; i < n; i++){
            if(count + 1 >= arr[i]){
                count += arr[i];
            }
            else break;
        }
    }
    std::cout << ++count << std::endl;
    return 0;
}
