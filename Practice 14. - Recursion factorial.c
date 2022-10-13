#include<stdio.h>
int factorial(int n);
void main()
{
    int n;
    printf("Enter a number  for  factorial =\t");
    scanf("%d",&n);
    printf("%d! =  %d\n ",n,  factorial(n));

}
int factorial(int n)
{
    int fact;
    if(n==1)
        return 1;
    else
        fact= n* factorial(n-1);
        return fact;
}
