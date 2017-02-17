#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    map<int, vector<int>> mp;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        s.insert(stoi(str));
    }

    int count = 0, c = 10, max = 0;
    for(auto i : s){
        while (i != 0 && i % c == 0) {
            count++;
            c *= 10;
        }
        if(i == 0) count++;
        mp[count].push_back(i);
        if(max < count) max = count;
        c = 10;
        count = 0;
    }

    sort(mp[max].begin(), mp[max].end());
    cout << mp[max][0] << endl;
    return 0;
}
