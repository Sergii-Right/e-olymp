//
//  main.cpp
//  2327_counting_sort
//
//  Created by Sergii on 30.03.17.
//  Copyright © 2017 Sergii. All rights reserved.
//

#include <iostream>
#include <map>

int main(int argc, const char * argv[]) {
    int n;
    std::map<int, int> mp;
    for(int i = 0; i <= 100000; i++){
        mp.insert(std::pair<int, int>(i, 0));
    }
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int v;
        std::cin >> v;
        mp.at(v)++;
    }
    
    int count = 0;
    for(auto i : mp){
        for(int j = 0; j < i.second; j++){
            std::cout << i.first;
            if(count++ < n - 1) std::cout << ' ';
        }
    }
    std::cout << std::endl;
    
    return 0;
}
