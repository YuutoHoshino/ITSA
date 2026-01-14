#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char number[5];
    scanf("%s", number);
    for(int i=0;i<5;i++){
        for(int j=0;j<number[i]-'0';j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}