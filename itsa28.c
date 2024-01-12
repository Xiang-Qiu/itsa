#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a ,n = 0; 
    while(scanf("%d", &a) != EOF){
        for(int i = 0; i < a; i++){
            if(i % 6 == 0 && i % 12 != 0) n += i; 
        }
        printf("%d\n", n);
    }
}
