#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    int relay, friday = 0;
    struct tm tLocal = {};
    tLocal.tm_hour = 12;
    tLocal.tm_mday = 13;

    cin >> relay;
    relay <<= 1;
    vector<int> years(relay);
    for(int i = 0; i < relay; i++){
        cin >> years[i];
    }

    for(int i = 0; i < (int)years.size(); i += 2){
        for(int j = years[i]; j <= years[i + 1]; j++){
            tLocal.tm_year = j - 1900;
            for(int m = 0; m < 12; m++){
                tLocal.tm_mon = m;
                mktime(&tLocal);
                if(tLocal.tm_wday == 5){
                    friday++;
                }
            }
        }
    }
    cout << friday << endl;
    return 0;
}
