#include <stdio.h>
int main(){
    int n;
    do{
        printf("Enter the array's dimension : ");
        scanf("%d", &n);
    }while(n < 2);
    int M[n][n];
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Enter [%d][%d] : ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            int M_temp = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = M_temp;
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}