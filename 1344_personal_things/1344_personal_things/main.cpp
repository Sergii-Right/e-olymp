//
//  main.cpp
//  1344_personal_things
//
//  Created by Sergii on 03.04.17.
//  Copyright © 2017 Sergii. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    string **a = new string*[n];
    for(int i = 0; i < n; i++){
        a[i] = new string[4];
    }
    for(int i = 0; i < n; i++){
        cin >> a[i][0];
        cin >> a[i][1];
        cin >> a[i][2];
        cin >> a[i][3];
    }
    
    for(int i = 0; i < n - 1; i++){
        for(int j = 1; j < n - i; j++){
            bool check1 = a[j-1][2].length() == 3;
            bool check2 = a[j][2].length() == 3;
            string s = "";
            s.push_back(a[j-1][2][0]);
            s.push_back(check1 ? a[j-1][2][1] : ' ');
            int x = stoi(s);
            s = "";
            s.push_back(a[j][2][0]);
            s.push_back(check2 ? a[j][2][1] : ' ');
            int y = stoi(s);
            if(x > y){
                string arr[4];
                arr[0] = a[j - 1][0];
                arr[1] = a[j - 1][1];
                arr[2] = a[j - 1][2];
                arr[3] = a[j - 1][3];
                a[j-1][0] = a[j][0];
                a[j-1][1] = a[j][1];
                a[j-1][2] = a[j][2];
                a[j-1][3] = a[j][3];
                a[j][0] = arr[0];
                a[j][1] = arr[1];
                a[j][2] = arr[2];
                a[j][3] = arr[3];
            }
        }
    }
    
    for(int i = 0; i < n - 1; i++){
        for(int j = 1; j < n - i; j++){
            bool check1 = a[j-1][2].length() == 3;
            bool check2 = a[j][2].length() == 3;
            string s = "";
            s.push_back(a[j-1][2][0]);
            s.push_back(check1 ? a[j-1][2][1] : ' ');
            int x = stoi(s);
            s = "";
            s.push_back(a[j][2][0]);
            s.push_back(check2 ? a[j][2][1] : ' ');
            int y = stoi(s);
            string s1(1, a[j-1][2][a[j-1][2].length() - 1]);
            string s2(1, a[j][2][a[j][2].length()  - 1]);
            if(x == y && s1.compare(s2) > 0){
                string arr[4];
                arr[0] = a[j - 1][0];
                arr[1] = a[j - 1][1];
                arr[2] = a[j - 1][2];
                arr[3] = a[j - 1][3];
                a[j-1][0] = a[j][0];
                a[j-1][1] = a[j][1];
                a[j-1][2] = a[j][2];
                a[j-1][3] = a[j][3];
                a[j][0] = arr[0];
                a[j][1] = arr[1];
                a[j][2] = arr[2];
                a[j][3] = arr[3];
            }
        }
    }
    
    for(int i = 0; i < n - 1; i++){
        for(int j = 1; j < n - i; j++){
            bool check1 = a[j-1][2].length() == 3;
            bool check2 = a[j][2].length() == 3;
            string s = "";
            s.push_back(a[j-1][2][0]);
            s.push_back(check1 ? a[j-1][2][1] : ' ');
            int x = stoi(s);
            s = "";
            s.push_back(a[j][2][0]);
            s.push_back(check2 ? a[j][2][1] : ' ');
            int y = stoi(s);
            string s1(1, a[j-1][2][a[j-1][2].length() - 1]);
            string s2(1, a[j][2][a[j][2].length()  - 1]);
            if(x == y && s1.compare(s2) == 0){
                if(a[j - 1][0].compare(a[j][0]) > 0){
                    string arr[4];
                    arr[0] = a[j - 1][0];
                    arr[1] = a[j - 1][1];
                    arr[2] = a[j - 1][2];
                    arr[3] = a[j - 1][3];
                    a[j-1][0] = a[j][0];
                    a[j-1][1] = a[j][1];
                    a[j-1][2] = a[j][2];
                    a[j-1][3] = a[j][3];
                    a[j][0] = arr[0];
                    a[j][1] = arr[1];
                    a[j][2] = arr[2];
                    a[j][3] = arr[3];
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i][2] << ' ' << a[i][0] << ' ' << a[i][1] << ' ' << a[i][3] << endl;
    }
    
    return 0;
}
