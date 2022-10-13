#include<stdio.h>
void main()
/*{
    int i,j;
    for(i=0;i<4 ;i++)
    {
        for(j=0;j<=i ;j++)
        {
            printf("%d ",(i+j+1)%2);
        }
        printf("\n");
    }
}
{
        int i,j;
    for(i=0;i<4 ;i++)
    {
        for(j=0;j<=i ;j++)
        {
            printf("%d ",i+1);
        }
        printf("\n");
    }
}
{
    {
    int i,j;
    for(i=0;i<4 ;i++)
    {
        for(j=4;j>i ;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
}

    {
    int i,j;
    for(i=0;i<4 ;i++)
    {
        for(j=4;j>i ;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}*/
{
    int row , column;
   for(row = 1; row<=4; row++){
        for(column=4; column>=1; column--){
            if(row < column){
                printf("   ");
            }else{
                printf(" * ");
            }
        }
        printf("\n");
    }
}
