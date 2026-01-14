#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    if(n>=10&&n<30){
        printf("%d", 100*n*0.9);
    }else if(n<100&&n>30){
        printf("%d", 100*n*0.8);
    }else{
        printf("%d", 100*n*0.7);
    }
	return 0;
}