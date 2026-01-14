#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    if (n <= 1) {
        printf("NO\n");
    }
    int is_prime = 1;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime == 1) {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}