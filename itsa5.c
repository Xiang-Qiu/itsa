#include <stdio.h>  
#include <stdlib.h>  
int main(){  
    int x, a[10];  
    scanf("%d", &x);  
    if(x >= 0){  
        a[0] = x/128;  
        x -= 128*a[0];  
        a[1] = x/64;  
        x -= 64*a[1];  
        a[2] = x/32;  
        x -= 32*a[2];  
        a[3] = x/16;  
        x -= 16*a[3];  
        a[4] = x/8;  
        x -= 8*a[4];  
        a[5] = x/4;  
        x -= 4*a[5];  
        a[6] = x/2;  
        x -= 2*a[6];  
        a[7] = x/1;  
        printf("%d%d%d%d%d%d%d%d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);  
    }else{  
        x = 0 - x - 1;  
        a[0] = x/128;  
        x -= 128*a[0];  
        a[1] = x/64;  
        x -= 64*a[1];  
        a[2] = x/32;  
        x -= 32*a[2];  
        a[3] = x/16;  
        x -= 16*a[3];  
        a[4] = x/8;  
        x -= 8*a[4];  
        a[5] = x/4;  
        x -= 4*a[5];  
        a[6] = x/2;  
        x -= 2*a[6];  
        a[7] = x/1;  
        printf("%d%d%d%d%d%d%d%d\n",   
        abs(1 - a[0]), abs(1 - a[1]), abs(1 - a[2]), abs(1 - a[3]),   
        abs(1 - a[4]), abs(1 - a[5]), abs(1 - a[6]), abs(1 - a[7]));  
    }  
}  
