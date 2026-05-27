#include<stdio.h>
int main(){
    int n, m;

    scanf("%d %d", &n, &m);

    if(n != m){
        printf("NO\n");
        return 0;
    }

    int matrix[105][105];

    for(int i = 0; i < n; i++ ){
        for(int j = 0; j < m; j++ ){
            scanf("%d", &matrix[i][j]);
        }
    }

        int is_jadu = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j || i + j == n - 1 ){
                if(matrix[i][j] != 1){
                    is_jadu = 0;
                    break;
                }
            }
            else{
                if(matrix[i][j] != 0){
                    is_jadu = 0;
                    break;
                }
            }
            

            }
        if(!is_jadu) break;
        }
        
    if(is_jadu){
    printf("YES\n");
}
else{
    printf("NO\n");
}
    return 0;
    
}


