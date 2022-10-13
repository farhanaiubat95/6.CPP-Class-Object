#include<stdio.h>
int prime(int n);
void main()
{
    int  n;
    printf("Enter a rang of number ,1 to untill which you want to show prime number series =");
     scanf("%d",&n);
     printf("The prime number series  untill %d is =\t\n",n);
     prime(n);
 printf("\nEnter a rang of number ,1 to untill which you want to show prime number series =");
     scanf("%d",&n);
     printf("The prime number series  untill %d is = \t\n",n);
     prime(n);
}
int  prime(int n)
{
    int i, j,c ;
     for(i=2; i<=n; i++)
     {
        c=0;
         for(j=2; j<=i/2;j++)
        {
         if(i%j==0)
         {
             c++;
             break;
         }
        }
        if(c==0)
        {
            printf("%d,\t",i);
        }
     }
     return i;
}
