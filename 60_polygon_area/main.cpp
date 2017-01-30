#include <stdio.h>
#include <vector>
#include <cstdlib>


struct coord{
    int x[2];
};

int main()
{
    int n, a = 0, b = 0;
    scanf("%d", &n);
    std::vector<coord> coords(n + 1);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &coords[i].x[j]);
        }
    }
    coords[n].x[0] = coords[0].x[0];
    coords[n].x[1] = coords[0].x[1];
    for(int i = 0; i < n; i++){
        a += coords[i].x[0] * coords[i + 1].x[1];
        b += coords[i].x[1] * coords[i + 1].x[0];
    }

    printf("%.3lf\n", abs(a - b) / 2.);

    return 0;
}
