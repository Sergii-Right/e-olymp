//
//  main.cpp
//  3260_how_many
//
//  Created by Sergii on 06.04.17.
//  Copyright © 2017 Sergii. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

string addBin(string a, string b){
    int lena = (int)a.length(), lenb = (int)b.length();
    int nmax = lena < lenb ? lenb : lena;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if(lena != lenb){
        for(int i = 0; i < nmax; i++){
            if(lena > lenb){
                b.push_back('0');
            }
            else{
                a.push_back('0');
            }
        }
    }
    string res = "";
    char ch = '0';
    for(int i = 0; i < nmax; i++){
        int x = (int)(a[i] - '0'), y = (int)(b[i] - '0'), z = (int)(ch - '0');
        switch (x + y + z) {
            case 3:
                res += "1";
                ch = '1';
                break;
            case 2:
                res += "0";
                ch = '1';
                break;
            case 1:
                res += "1";
                ch = '0';
                break;
            case 0:
                res += "0";
                ch = '0';
                break;
        }
    }
    if(ch == '1'){
        res += "1";
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string res = "";
    string a, b;
    cin >> a >> b;
    res = addBin(a, b);
    cout << res << endl;
    return 0;
}
