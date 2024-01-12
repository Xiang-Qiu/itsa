#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a , b; 
    while(scanf("%d %d", &a, &b) != EOF){
        printf("%d\n", (a / 3) * (a / 3 + 1) / 2 * 3); 
    } 
}
