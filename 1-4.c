#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *english[] = {"dog", "cat", "duck", "cow", "fox"};
    char *chinese[] = {"狗", "貓", "鴨", "牛", "狐"};
    char input[5];
    scanf("%s", input);
    for(int i = 0; i < 5; i++) {
        if(strcmp(input, english[i]) == 0) {
            printf("%s\n", chinese[i]);
            return 0;
        }
        if(strcmp(input, chinese[i]) == 0) {
            printf("%s\n", english[i]);
            return 0;
        }
    }
    return 0;
}