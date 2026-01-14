#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);
        if(a>31){
            printf("Value of more than 31\n");
        }else{
            int ans = 1LL<<a;
            printf("%d\n", ans);
        }
    }
    return 0;
}