#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    map<int, string> mp;
    int icq;
    string name;
    for(int i = 0; i < n; i++){
        cin >> name >> icq;
        mp[icq] = name;
    }

    for(auto i : mp){
        cout << i.second << ' ' << i.first << endl;
        if(--k == 0) break;
    }

    return 0;
}
