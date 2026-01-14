#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n;
    while(scanf("%d", &n) != EOF){
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            if (x >= 50 && x <= 70) {
                printf("%d\n", x);
            } else {
                printf("100\n");
            }
        }
    }
    return 0;
}