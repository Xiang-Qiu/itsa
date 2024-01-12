#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a ,b; 
    while(scanf("%lf %lf", &a, &b) != EOF){
        printf("%.1lf\n", a * b + (a - 60) * b * 0.33 * (a > 60) + (a - 120) * b * 0.33 * (a > 120)); 
    } 
}
