#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);
        printf("%d %d %d\n", a,a*a,a*a*a);
    }
    return 0;
}