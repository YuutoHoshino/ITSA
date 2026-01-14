#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%c", &n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'){
        printf("母音");
    }
    else if((n=='A'||n=='E'||n=='I'||n=='O'||n=='U')){
        printf("母音");
    }
    else{
        printf("子音");
    }
	return 0;
}