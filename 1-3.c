#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char number[5];
    scanf("%s", number);
    for(int i=3;i>0;i--) printf("%c,",number[i]);
    printf("%c",number[0]);
    return 0;
}