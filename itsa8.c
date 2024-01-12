#include <stdio.h>
#include <stdlib.h>

int main(){
    double a,b;
    double c;
    while(scanf("%lf %lf",&a, &b) != EOF){
        c = a*b/2;
        printf("%.1lf\n", c);
    }
}
