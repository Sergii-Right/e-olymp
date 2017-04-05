//
//  main.cpp
//  3917_simplicity_check
//
//  Created by Sergii on 05.04.17.
//  Copyright © 2017 Sergii. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sqrtn = sqrt(n);
    for(int i = 2; i <= sqrtn; i++){
        if(n % i == 0){
            cout << "False" << endl;
            return 0;
        }
    }
    cout << "True" << endl;
    return 0;
}
