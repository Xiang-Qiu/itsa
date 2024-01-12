#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int min(int a, int b, int c){
    int m = a;
    if(b < a) m = b;
    if(c < a) m = c;
    return m;
}

int max(int a, int b, int c){
    int m = a;
    if(b > a) m = b;
    if(c > a) m = c;
    return m;
}
int main(){
    int a ,b ,c, x, y;
    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        int sum = a + b + c;
        int x = max(a, b, c); 
        int y = min(a, b, c);
        int z = sum - x - y;
        if(y + z <= x) printf("Not Triangle\n");
        else if(y * y + z * z  == x * x) printf("Right Triangle\n");
        else if(y * y + z * z  > x * x) printf("Acute Triangle\n");
        else if(y * y + z * z  < x * x) printf("Obtuse Triangle\n"); 
    }
}
