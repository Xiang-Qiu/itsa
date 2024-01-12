#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a; 
    while(scanf("%d", &a) != EOF){
        if((a >= 1500)) printf("%.1lf\n", (double)a * 0.9 * 0.79); 
        if((a > 800 && a < 1500)) printf("%.1lf\n", (double)a * 0.9 * 0.9);
        if((a <= 800)) printf("%.1lf\n", (double)a * 0.9);
    } 
}
