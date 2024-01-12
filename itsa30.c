#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int p[] = {6, 28, 496, 8128, 33550336};

int main(){
    int a, t;      
    scanf("%d", &a);
    for (int i = 0; i < 4; i++){
        if(a >= p[i]) t = i;
    } 
    for(int i = 0; i <= t; i++){
        printf("%d", p[i]);
        if(i != t) printf(" ");
    }
    printf("\n");
}
