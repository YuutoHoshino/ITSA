#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    while(scanf("%d", &n) != EOF){
    char subject[100];
    int score = 0;
    int cnt = 0;
    int i;
    for (i = 0; i < n; i++){
        scanf("%s %d", subject, &score);
        if (score >= 60) {
            printf("%s\n", subject);
            cnt++;
        }
    }
    if (cnt * 2 >= n) {
        printf("晉級\n");
    }else{
        printf("失敗\n");
    }
    }
	return 0;
}