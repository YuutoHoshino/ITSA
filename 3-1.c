#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    if(n>0){
        printf("正數");
    }
    else if(n==0){
        printf("0");
    }
    else{
        printf("負數");
    }
	return 0;
}