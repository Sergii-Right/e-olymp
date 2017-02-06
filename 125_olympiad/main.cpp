#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now;
    time(&now);
    int h1, m1, s1;
    tm tm1 = {};
    tm tm2 = {};
    tm1 = *localtime(&now);
    tm2 = *localtime(&now);
    cin >> tm1.tm_hour >> tm1.tm_min >> tm1.tm_sec;
    cin >> tm2.tm_hour >> tm2.tm_min >> tm2.tm_sec;
    double d = difftime(mktime(&tm2), mktime(&tm1));
    h1 = d / 60 / 60;
    m1 = d / 60 - h1 * 60;
    s1 = d - h1 * 60 * 60 - m1 * 60;
    cout << h1 << " " << m1 << " " << s1 << endl;
    return 0;
}
