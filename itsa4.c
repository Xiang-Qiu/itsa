#include <stdio.h>  
#include <stdlib.h>  
  
int main(){  
    int x1, y1, x2, y2, z, ans;  
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);  
    z = (x2*60 + y2 - x1*60 - y1)/30;  
    if(z <= 4)  ans = 30*z;  
    if(z > 4 && z < 8) ans = (z - 4)*40 + 120;  
    if(z >= 8) ans = (z-8)*60 + 280;  
    printf("%d\n", ans);  
}
