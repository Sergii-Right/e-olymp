#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> st;
    st.insert(s.begin(), s.end());
    cout << st.size() << endl;
    return 0;
}
