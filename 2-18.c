#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int s;
    scanf("%d", &s);
    int tmp1,tmp2,tmp3,tmp4;
    if(s>=86400){
        tmp1 = s / 86400;
        s %= 86400;
    }
    if(s>=3600){
        tmp2 = s / 3600;
        s %= 3600;
    }
    if(s>=60){
        tmp3 = s / 60;
        s %= 60;
    }
    printf("%d days\n", tmp1);
    printf("%d hours\n", tmp2);
    printf("%d minutes\n", tmp3);
    printf("%d seconds\n", s);
    return 0;
}