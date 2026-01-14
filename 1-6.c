#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,m;
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}