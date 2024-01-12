#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a ,b ,c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        int sum = a + b + c;
        int max = a;
        if(b > a) max = b;
        if(c > a) max = c;
        if(sum - max > max) printf("fit\n");
        else printf("unfit\n");
    }
}
