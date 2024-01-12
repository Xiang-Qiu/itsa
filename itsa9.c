#include <stdio.h>
#include <stdlib.h>

int main(){
    double a,b,c;
    double d;
    while(scanf("%lf %lf %lf",&a, &b, &c) != EOF){
        d = (a+b)*c/2;
        printf("Trapezoid area:%.1lf\n", d);
    }
}
