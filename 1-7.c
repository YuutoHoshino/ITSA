#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int type;
    scanf("%d", &type);
    int height = 5;

    if(type == 1) {
        for(int i=0; i<height; i++) {
            for(int j=0; j < height-1-i; j++) {
                printf(" ");
            }
            
            for(int k=0; k < 2*i+1; k++) {
                if(k == 0 || k == 2*i || i == height-1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    
    else if(type == 2) {
        for(int i=0; i<height; i++) {
            for(int j=0; j < height-1-i; j++) {
                printf(" ");
            }
            for(int k=0; k < 2*i+1; k++) {
                printf("*");
            }
            printf("\n");
        }
    }

    else if(type == 3) {
        for(int i=0; i<height; i++) {
            for(int j=0; j < i; j++) {
                printf(" ");
            }
            for(int k=0; k < 9 - 2*i; k++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}