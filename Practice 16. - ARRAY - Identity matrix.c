#include<stdio.h>
void main ()
{
     int A[10][10], i, j, n;
    printf("How many row: \n");
    scanf("%d", &n);

    printf("The Identity matrix is : \n");
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            if(i==j)
            {
                printf("1 ");
            }
            else
            {
                         printf("0 ");
            }
        }
        printf("\n");
    }
}
