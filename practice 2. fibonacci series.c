#include<stdio.h>
int  fibo(int n);

void main()
{
    fibo(100);

}
int  fibo(int n)
{
    int d1=0,d2=1,fibo;
    fibo=d1+d2;
    printf("The fibonacci series of 100 term is = %d ,%d,",d1,d2);

    while(fibo<=n)
    {
        printf("%d,",fibo);
        d1=d2;
        d2=fibo;
        fibo=d1+d2;
    }
    return fibo;
}
