#include <stdio.h>
#include <math.h>

int main()
{
    double x1,y1,x2,y2,z2,d;
    scanf("%lf %lf",&x1, &y1);
    scanf("%lf %lf %lf",&x2, &y2, &z2);
    d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z2, 2));
    printf("%.3f\n",1 / d);
    return 0;
}
