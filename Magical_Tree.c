#include<stdio.h>
int main(){
    int n;
    
    scanf("%d", &n);

    int l = 5 + (n + 1)/2;

    for(int i = 1; i <= l; i++){
        for(int j = 1; j <= l-i; j++){
            printf(" ");
        }

        for(int j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
for(int i = 0; i < 5; i++){
    for(int j = 1; j <=5; j++ ){
        printf(" ");
    }

    for(int j = 1; j <= n; j++){
        printf("*");
    }

    printf("\n");
}
    
}
