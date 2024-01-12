#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a ,b ,c; 
    scanf("%d %d", &a, &b);
    if (a > b){
        c = a;
        a = b;
        b = a;
        c = 0; 
    }
    for(int i = a; i <= b ; i++){
        c += i;
    }
    printf("%d\n", c);
}
