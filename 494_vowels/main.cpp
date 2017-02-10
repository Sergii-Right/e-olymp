#include <iostream>

using namespace std;

int main()
{
    string str;
    int size = 0;
    getline(cin, str);
    string instr = "AEIOUY";
    for(int i = 0; i < (int)str.size(); i++){
        for(int j = 0; j < (int)instr.size(); j++){
            if(str[i] == instr[j]){
                size++;
            }
        }
    }

    cout << size << endl;
    return 0;
}
