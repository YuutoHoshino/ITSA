#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char number[5];
    scanf("%s", number);
    for(int i=0;i<4;i++) printf("%c\n",number[i]);
    return 0;
}