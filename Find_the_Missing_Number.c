#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);



    while (T--)
    {
        long long int M;
        long long int A, B, C;

        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long int prod = A * B * C ;

        if(prod == 0){
            if(M == 0){
                printf("0\n");
            }

            else{
                printf("-1\n");
            }
        }

        else{
            if(M%prod == 0){
                printf("%lld\n", M/prod);
            }

            else{
                printf("-1\n");
            }
        }
    }
    
    return 0;

}
