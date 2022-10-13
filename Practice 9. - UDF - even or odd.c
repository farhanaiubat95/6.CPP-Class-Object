#include<stdio.h>
int eo(int n);
void main()
{
    int n ,h;
    printf("Enter a number =");
    scanf("%d",&n);
    h=eo(n);
    if (h==1)
    {
        printf("......%d is even number .....",n);
    }
    else{
        printf("......%d is Odd number.....",n);
    }
}
int eo(int n)
{
    if(n%2==0)
    {
     return 1;
    }
    else{
        return 0;
    }
}
