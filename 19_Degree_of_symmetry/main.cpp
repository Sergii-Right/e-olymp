#include <stdio.h>

int main()
{
    char str[10] = {};
    scanf("%10s", str);
    short size = 0, iter = 0;
    for(char i : str){
        if(i){
            size++;
        }
    }

    if(size % 2 > 0){
        iter++;
    }

    for(int i = 0; i < size / 2; i++){
        if(str[i] == str[size - 1 - i]){
            iter++;
        }
    }

    printf("%d\n", iter);
    return 0;
}
