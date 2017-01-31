#include <ctime>
#include <vector>
#include <stdio.h>

using namespace std;

struct mytm{
    struct tm tm[2] = {};
    int count;
};

int compare(vector<mytm>vec, int index){
    if(vec.empty())
        return 0;
    if(index < (int)vec.size() - 1){
        if(difftime(mktime(&vec[index].tm[0]), mktime(&vec[index + 1].tm[0])) > 0 || difftime(mktime(&vec[index].tm[1]), mktime(&vec[index + 1].tm[0])) > 0){
            auto vec1 = vec;
            std::swap(vec1[index], vec1[index+1]);
            int count1 = compare(vec1, index + 1);
            int count2 = compare(vec, index + 1) - 1;
            return count1 > count2 ? count1 : count2 + 1;
        }
        else{
            return compare(vec, index + 1) + 1;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    std::vector<mytm> vec(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d:%d", &vec[i].tm[j].tm_hour, &vec[i].tm[j].tm_min);
            vec[i].count = 0;
            vec[i].tm[j].tm_hour -= 1;
            vec[i].tm[j].tm_min -= 1;
            vec[i].tm[j].tm_sec = 0;
            vec[i].tm[j].tm_year = 2017 - 1900;
            vec[i].tm[j].tm_mon = 0;
            vec[i].tm[j].tm_mday = 1;
        }
    }
    printf("%d\n", compare(vec, 0));
    return 0;
}
