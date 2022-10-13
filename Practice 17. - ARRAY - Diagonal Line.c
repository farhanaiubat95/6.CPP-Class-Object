#include <stdio.h>

void main(){
     int A[10][10], r, c, n;
    printf("How many row: \n");
    scanf("%d", &n);
    printf("Enter matrix A value: \n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            scanf("%d", &A[r][c]);
        }
    }
    printf("The matrix of A are: \n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("%d\t", A[r][c]);
        }
        printf("\n");
    }
    printf("The Diagonal elements of A matrix are: \n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
           if(r == c){
                printf("%d", A[r][c]);
           }
        }
        printf("\n");
    }
}



