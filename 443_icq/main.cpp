#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    map<int, string> mp;
    set<string> st;

    int icq;
    string name;
    for(int i = 0; i < n; i++){
        cin >> name >> icq;
        mp[icq] = name;
    }

    for(auto i : mp){
        st.insert(i.second);
    }

    for(auto i : st){
        if(k-- == 0) break;
        cout << i << endl;
    }

    return 0;
}
