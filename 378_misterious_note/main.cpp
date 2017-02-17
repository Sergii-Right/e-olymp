#include <iostream>
#include <map>

using namespace std;

int main()
{
    string note, code, noteEncode = "";
    map<char, char> mp;
    getline(cin, note);
    getline(cin, code);
    for(int i = 0; i < (int)code.size(); i++){
        if(code[i] == ' ') continue;
        mp[65 + i] = code[i];
    }

    for(int i = 0; i < (int)note.size(); i++){
        if(note[i] == ' '){
            noteEncode += ' ';
            continue;
        }
        noteEncode += mp[note[i]];
    }

    cout << noteEncode << endl;
    return 0;
}
