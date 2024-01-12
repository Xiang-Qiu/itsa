#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a;
    while(scanf("%lf",&a) != EOF){
        printf("%.1lf\n",((double)round(((a * 9 / 5) + 32) * 10)) / 10);
    }
}
