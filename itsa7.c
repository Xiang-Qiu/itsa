#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a, &b) != EOF){
        a = a+b;
        printf("%d\n", a);
    }
}
