#include <iostream>
#include <deque>
#include <bitset>

using namespace std;

int main()
{
    int N, Max = 0;
    bitset<32> bit;
    cin >> N;
    bit = N;
    deque<bool> deka;

    for(unsigned long i = 0; i < bit.size(); i++){
        deka.push_front(bit[i]);
    }

    for(auto i : deka){
        if(i == false){
            deka.pop_front();
        }
        else {
            break;
        }
    }

    for(unsigned long i = 0; i < deka.size(); i++){
        int num = 0;
        for(unsigned long j = 0; j < deka.size(); j++){
            if(deka[deka.size() - 1 - j] == 1){
                num += 1 << j;
            }
        }
        string s = "";
        for(auto i : deka){
            s += to_string(i);
        }
//        cout << s << ": " << num << endl;
        deka.push_back(deka[0]);
        deka.pop_front();
        if(Max < num){
            Max = num;
        }
    }

    cout << Max << endl;
    return 0;
}
