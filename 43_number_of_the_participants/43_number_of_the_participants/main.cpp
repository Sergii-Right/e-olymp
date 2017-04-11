//
//  main.cpp
//  43_number_of_the_participants
//
//  Created by Sergii on 11.04.17.
//  Copyright © 2017 Sergii. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int k, n, m, d;
    double x, s = -1;
    cin >> k >> n >> m >> d;
    x = 1 - 1./k - 1./n - 1./m;
    if(x > 0) {
        s  = d / x;
    }
    cout.precision(0);
    cout << fixed << s << endl;
    return 0;
}
