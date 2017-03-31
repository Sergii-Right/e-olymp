//
//  main.cpp
//  1457_sorting_station
//
//  Created by Sergii on 31.03.17.
//  Copyright © 2017 Sergii. All rights reserved.
//

#include <iostream>
int main() {
    int n, m, max1 = 0, el;
    std::cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        std::cin >> el;
        if(max1 < el) max1 = el;
        else if(max1 > m || max1 + el > m) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }
    std::cout << "Yes" << std::endl;
    return 0;
}
