#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    long long n[20] = {1};
    for (int i = 1; i <= 20; ++i){
        n[i] = n[i - 1] * i;
    } 
    while(scanf("%d", &a) != EOF){
        printf("%lld\n", n[a]);
    } 
}
