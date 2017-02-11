#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == ' ') s.erase(s.begin() + i);
    }

    bool check = true;
    for(int i = 0, j = (int)s.size() - 1; i < (int)s.size(); i++, j--){
        if(s[i] != s[j]) check = false;
    }

    if(check){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << endl;
    return 0;
}
