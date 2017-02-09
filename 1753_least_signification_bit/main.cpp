#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        if(n == 0) break;
        bitset<8> bit;
        bit = n;
        int num = 0;
        for(int i = 0; i < (int)bit.size(); i++){
            if(bit[i] == 1 && num == 0){
                num += 1 << i;
            }
        }
        cout << num << endl;
    }

    return 0;
}
