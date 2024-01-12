#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a;
    while(scanf("%lf",&a) != EOF){
        printf("%d\n", (int)ceil(a / 0.238));
    }
}
