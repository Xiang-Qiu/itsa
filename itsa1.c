#include <stdio.h>  
#include <string.h>  
  
int main(){   
    char a[5];  
    int num = 0;  
    int p = 5;  
    char ans1[25];  
    char ans2[50];  
    char ans3[50];  
    char ans4[50];  
    char ans5[50];  
    for(int i = 0; i < 4; i++){  
        scanf("%c", &a[i]);  
    }  
    for(int p = 0; p < 20; p += 6){  
        if(a[num] == '0'){  
        ans1[p] = '*', ans1[p+1] = '*', ans1[p+2] = '*', ans1[p+3] = '*', ans1[p+4] = '*', ans1[p+5] = ' ';  
        ans2[p] = '*', ans2[p+1] = ' ', ans2[p+2] = ' ', ans2[p+3] = ' ', ans2[p+4] = '*', ans2[p+5] = ' ';  
        ans3[p] = '*', ans3[p+1] = ' ', ans3[p+2] = ' ', ans3[p+3] = ' ', ans3[p+4] = '*', ans3[p+5] = ' ';  
        ans4[p] = '*', ans4[p+1] = ' ', ans4[p+2] = ' ', ans4[p+3] = ' ', ans4[p+4] = '*', ans4[p+5] = ' ';  
        ans5[p] = '*', ans5[p+1] = '*', ans5[p+2] = '*', ans5[p+3] = '*', ans5[p+4] = '*', ans5[p+5] = ' ';  
        }  
        if(a[num] == '1'){  
        ans1[p] = ' ', ans1[p+1] = ' ', ans1[p+2] = ' ', ans1[p+3] = ' ', ans1[p+4] = '*', ans1[p+5] = ' ';  
        ans2[p] = ' ', ans2[p+1] = ' ', ans2[p+2] = ' ', ans2[p+3] = ' ', ans2[p+4] = '*', ans2[p+5] = ' ';  
        ans3[p] = ' ', ans3[p+1] = ' ', ans3[p+2] = ' ', ans3[p+3] = ' ', ans3[p+4] = '*', ans3[p+5] = ' ';  
        ans4[p] = ' ', ans4[p+1] = ' ', ans4[p+2] = ' ', ans4[p+3] = ' ', ans4[p+4] = '*', ans4[p+5] = ' ';  
        ans5[p] = ' ', ans5[p+1] = ' ', ans5[p+2] = ' ', ans5[p+3] = ' ', ans5[p+4] = '*', ans5[p+5] = ' ';    
        }  
        if(a[num] == '2'){  
        ans1[p] = '*', ans1[p+1] = '*', ans1[p+2] = '*', ans1[p+3] = '*', ans1[p+4] = '*', ans1[p+5] = ' ';  
        ans2[p] = ' ', ans2[p+1] = ' ', ans2[p+2] = ' ', ans2[p+3] = ' ', ans2[p+4] = '*', ans2[p+5] = ' ';  
        ans3[p] = '*', ans3[p+1] = '*', ans3[p+2] = '*', ans3[p+3] = '*', ans3[p+4] = '*', ans3[p+5] = ' ';  
        ans4[p] = '*', ans4[p+1] = ' ', ans4[p+2] = ' ', ans4[p+3] = ' ', ans4[p+4] = ' ', ans4[p+5] = ' ';  
        ans5[p] = '*', ans5[p+1] = '*', ans5[p+2] = '*', ans5[p+3] = '*', ans5[p+4] = '*', ans5[p+5] = ' ';  
        }  
        if(a[num] == '3'){  
        ans1[p] = '*', ans1[p+1] = '*', ans1[p+2] = '*', ans1[p+3] = '*', ans1[p+4] = '*', ans1[p+5] = ' ';  
        ans2[p] = ' ', ans2[p+1] = ' ', ans2[p+2] = ' ', ans2[p+3] = ' ', ans2[p+4] = '*', ans2[p+5] = ' ';  
        ans3[p] = '*', ans3[p+1] = '*', ans3[p+2] = '*', ans3[p+3] = '*', ans3[p+4] = '*', ans3[p+5] = ' ';  
        ans4[p] = ' ', ans4[p+1] = ' ', ans4[p+2] = ' ', ans4[p+3] = ' ', ans4[p+4] = '*', ans4[p+5] = ' ';  
        ans5[p] = '*', ans5[p+1] = '*', ans5[p+2] = '*', ans5[p+3] = '*', ans5[p+4] = '*', ans5[p+5] = ' ';  
        }  
        if(a[num] == '4'){  
        ans1[p] = '*', ans1[p+1] = ' ', ans1[p+2] = ' ', ans1[p+3] = ' ', ans1[p+4] = '*', ans1[p+5] = ' ';  
        ans2[p] = '*', ans2[p+1] = ' ', ans2[p+2] = ' ', ans2[p+3] = ' ', ans2[p+4] = '*', ans2[p+5] = ' ';  
        ans3[p] = '*', ans3[p+1] = '*', ans3[p+2] = '*', ans3[p+3] = '*', ans3[p+4] = '*', ans3[p+5] = ' ';  
        ans4[p] = ' ', ans4[p+1] = ' ', ans4[p+2] = ' ', ans4[p+3] = ' ', ans4[p+4] = '*', ans4[p+5] = ' ';  
        ans5[p] = ' ', ans5[p+1] = ' ', ans5[p+2] = ' ', ans5[p+3] = ' ', ans5[p+4] = '*', ans5[p+5] = ' ';  
        }  
        if(a[num] == '5'){  
        ans1[p] = '*', ans1[p+1] = '*', ans1[p+2] = '*', ans1[p+3] = '*', ans1[p+4] = '*', ans1[p+5] = ' ';  
        ans2[p] = '*', ans2[p+1] = ' ', ans2[p+2] = ' ', ans2[p+3] = ' ', ans2[p+4] = ' ', ans2[p+5] = ' ';  
        ans3[p] = '*', ans3[p+1] = '*', ans3[p+2] = '*', ans3[p+3] = '*', ans3[p+4] = '*', ans3[p+5] = ' ';  
        ans4[p] = ' ', ans4[p+1] = ' ', ans4[p+2] = ' ', ans4[p+3] = ' ', ans4[p+4] = '*', ans4[p+5] = ' ';  
        ans5[p] = '*', ans5[p+1] = '*', ans5[p+2] = '*', ans5[p+3] = '*', ans5[p+4] = '*', ans5[p+5] = ' ';  
        }  
        if(a[num] == '6'){  
        ans1[p] = '*', ans1[p+1] = '*', ans1[p+2] = '*', ans1[p+3] = '*', ans1[p+4] = '*', ans1[p+5] = ' ';  
        ans2[p] = '*', ans2[p+1] = ' ', ans2[p+2] = ' ', ans2[p+3] = ' ', ans2[p+4] = ' ', ans2[p+5] = ' ';  
        ans3[p] = '*', ans3[p+1] = '*', ans3[p+2] = '*', ans3[p+3] = '*', ans3[p+4] = '*', ans3[p+5] = ' ';  
        ans4[p] = '*', ans4[p+1] = ' ', ans4[p+2] = ' ', ans4[p+3] = ' ', ans4[p+4] = '*', ans4[p+5] = ' ';  
        ans5[p] = '*', ans5[p+1] = '*', ans5[p+2] = '*', ans5[p+3] = '*', ans5[p+4] = '*', ans5[p+5] = ' ';  
        }  
        if(a[num] == '7'){  
        ans1[p] = '*', ans1[p+1] = '*', ans1[p+2] = '*', ans1[p+3] = '*', ans1[p+4] = '*', ans1[p+5] = ' ';  
        ans2[p] = ' ', ans2[p+1] = ' ', ans2[p+2] = ' ', ans2[p+3] = ' ', ans2[p+4] = '*', ans2[p+5] = ' ';  
        ans3[p] = ' ', ans3[p+1] = ' ', ans3[p+2] = ' ', ans3[p+3] = ' ', ans3[p+4] = '*', ans3[p+5] = ' ';  
        ans4[p] = ' ', ans4[p+1] = ' ', ans4[p+2] = ' ', ans4[p+3] = ' ', ans4[p+4] = '*', ans4[p+5] = ' ';  
        ans5[p] = ' ', ans5[p+1] = ' ', ans5[p+2] = ' ', ans5[p+3] = ' ', ans5[p+4] = '*', ans5[p+5] = ' ';  
        }  
        if(a[num] == '8'){  
        ans1[p] = '*', ans1[p+1] = '*', ans1[p+2] = '*', ans1[p+3] = '*', ans1[p+4] = '*', ans1[p+5] = ' ';  
        ans2[p] = '*', ans2[p+1] = ' ', ans2[p+2] = ' ', ans2[p+3] = ' ', ans2[p+4] = '*', ans2[p+5] = ' ';  
        ans3[p] = '*', ans3[p+1] = '*', ans3[p+2] = '*', ans3[p+3] = '*', ans3[p+4] = '*', ans3[p+5] = ' ';  
        ans4[p] = '*', ans4[p+1] = ' ', ans4[p+2] = ' ', ans4[p+3] = ' ', ans4[p+4] = '*', ans4[p+5] = ' ';  
        ans5[p] = '*', ans5[p+1] = '*', ans5[p+2] = '*', ans5[p+3] = '*', ans5[p+4] = '*', ans5[p+5] = ' ';  
        }  
        if(a[num] == '9'){  
        ans1[p] = '*', ans1[p+1] = '*', ans1[p+2] = '*', ans1[p+3] = '*', ans1[p+4] = '*', ans1[p+5] = ' ';  
        ans2[p] = '*', ans2[p+1] = ' ', ans2[p+2] = ' ', ans2[p+3] = ' ', ans2[p+4] = '*', ans2[p+5] = ' ';  
        ans3[p] = '*', ans3[p+1] = '*', ans3[p+2] = '*', ans3[p+3] = '*', ans3[p+4] = '*', ans3[p+5] = ' ';  
        ans4[p] = ' ', ans4[p+1] = ' ', ans4[p+2] = ' ', ans4[p+3] = ' ', ans4[p+4] = '*', ans4[p+5] = ' ';  
        ans5[p] = '*', ans5[p+1] = '*', ans5[p+2] = '*', ans5[p+3] = '*', ans5[p+4] = '*', ans5[p+5] = ' ';  
        }  
        num++;  
    }  
  
    for(int i = 0; i < 23; i++) printf("%c", ans1[i]);  
    printf("\n");  
    for(int i = 0; i < 23; i++) printf("%c", ans2[i]);  
    printf("\n");  
    for(int i = 0; i < 23; i++) printf("%c", ans3[i]);  
    printf("\n");  
    for(int i = 0; i < 23; i++) printf("%c", ans4[i]);  
    printf("\n");  
    for(int i = 0; i < 23; i++) printf("%c", ans5[i]);  
    printf("\n");  
}  
