#include <stdio.h>
#include <deque>

int main()
{
    int d, m, y, c;
    std::deque<char> dq, mq, yq;
    scanf("%d/%d/%d", &d, &m, &y);
    int d1 = d + 1;
    while (true) {
        if(d == 0 && m == 0 && y == 0)
        {
            break;
        }
        if(d != 0){
            c = d % d1;
            dq.push_front(c > 9 ? (char)(55 + c) : (char)(48 + c));
            d /= d1;
        }
        if(m != 0){
            c = m % d1;
            mq.push_front(c > 9 ? (char)(55 + c) : (char)(48 + c));
            m /= d1;
        }
        if(y != 0){
            c = y % d1;
           yq.push_front(c > 9 ? (char)(55 + c) : (char)(48 + c));
            y /= d1;
        }
    }
    for(auto i : dq){
        printf("%c", i);
    }
    printf("/");
    for(auto i : mq){
        printf("%c", i);
    }
    printf("/");
    for(auto i : yq){
        printf("%c", i);
    }
    printf("\n");
    return 0;
}
