#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a; 
    while(scanf("%d", &a) != EOF){
        for (int i = 1; i <= a / 35; i++) printf("%d%c", i * 35, "\n "[i != a / 35]);
    }
}
