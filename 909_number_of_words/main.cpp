#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int wcount = 0;
    if(s[0] != ' ') wcount++;
    for(int i = 1; i < (int)s.size(); i++){
        if(s[i - 1] != ' ' && s[i] == ' '){
            wcount++;
        }
    }
    cout << wcount << endl;
    return 0;
}
