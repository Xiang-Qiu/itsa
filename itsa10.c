#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a;
    scanf("%lf",&a);
    printf("%.1lf\n",((double)round(a * a * 10)) / 10);
}
