#include<stdio.h>
int eo(int n);
void main()
{
    int n , p;
    printf("Enter a number =");
    scanf("%d",&n);
    p= eo(n);
    if(p==1)
    {
        printf("----%d is a Even number....",n);
    }
    else{
                printf("----%d is a odd number....",n);
    }
}
int eo(int n)
{
    if(n==0)
    {
        return 1;
    } else if (n==1)
    {
        return 0;
    }else
    {
        return eo(n-2);
    }
}
