#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    tm tm1 = {}, tm2 = {};
    int d1, d2, m1, m2, y1, y2;
    cin >> d1 >> m1;
    cin >> d2 >> m2 >> y2;
    if(m1 > m2) {
        y1 = y2;
    }
    else if(m1 == m2 && d1 >= d2){
        y1 = y2;
    }
    else{
        y1 = y2 + 1;
    }

    if(m1 == 2){
        if(d1 == 29){
            while(!(y1 % 400 == 0 || (y1 % 4 == 0 && y1 % 100 != 0))){
                y1++;
            }
        }
    }

    m1 -= 1;
    y1 -= 1900;
    m2 -= 1;
    y2 -= 1900;

    tm1.tm_mday = d1;
    tm1.tm_mon = m1;
    tm1.tm_year = y1;
    tm2.tm_mday = d2;
    tm2.tm_mon = m2;
    tm2.tm_year = y2;


    double sec = difftime(mktime(&tm1), mktime(&tm2));

    cout << sec / 60 / 60 / 24 << endl;
    return 0;
}
