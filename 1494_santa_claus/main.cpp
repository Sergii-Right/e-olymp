#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s1, s2, s3, str = "";
    int n[3] = {};
    int ind = 0;
    getline(cin, s1);
    for(int i = 0; i < (int)s1.size(); i++){
        if(s1[i] != ' '){
            str += s1[i];
        }
        else{
            n[ind] = stoi(str);
            str = "";
            ind++;
        }
    }
    n[ind] = stoi(str);
    vector<int> childrens(n[0]);
    for(int i = 0; i < n[0]; i++){
        childrens[i] = i + 1;
    }

    int *m = new int[n[1]];
    int *k = new int[n[2]];

    str = "";
    ind = 0;
    getline(cin,s2);
    for(int i = 0; i < (int)s2.size(); i++){
        if(s2[i] != ' '){
            str += s2[i];
        }
        else{
            m[ind] = stoi(str);
            childrens.erase(childrens.begin() + m[ind] - 1);
            str = "";
            ind++;
        }
    }
    m[ind] = stoi(str);
    childrens.erase(childrens.begin() + m[ind] - 1);

    str = "";
    ind = 0;
    getline(cin, s3);
    for(int i = 0; i < (int)s3.size(); i++){
        if(s3[i] != ' '){
            str += s3[i];
        }
        else{
            k[ind] = stoi(str);
            childrens.erase(childrens.begin() + k[ind] - 1);
            str = "";
            ind++;
        }
    }
    k[ind] = stoi(str);
    childrens.erase(childrens.begin() + k[ind] - 1);

    cout << childrens.size() << endl;
    for(int i = 0; i < (int)childrens.size(); i++){
        cout << childrens[i] << ' ';
    }
    cout << endl;
    return 0;
}
