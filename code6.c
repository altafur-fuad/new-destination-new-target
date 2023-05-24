#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=n; i>=1; i--){
        for(int j = 1; j<= i; j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=2; i<=n; i++){
        for(int j = 1; j<= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}