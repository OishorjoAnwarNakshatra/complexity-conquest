#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);

    while (T--){
    
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int b[n];

    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(b[j] > b[j + 1])
            {
              int temp = b[j];
              b[j] = b[j + 1];
              b[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        int diff = abs(a[i] - b[i]);
        printf("%d", diff);
    
        if(i < n - 1){
            printf(" ");
    }
        else{
            printf("\n");
        }
    }

} 
    
}