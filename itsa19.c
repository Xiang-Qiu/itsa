#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int a, int b){
    return a % b ? gcd(b, a % b) : b;
}

int main(){
    int a, b; scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
}
