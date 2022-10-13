//GCD- Gratest Common Division,
#include<stdio.h>
int  GDC(int n1, int n2);
void main()
{
    int  n1,n2;
    printf("Enter 2 numbers =");
    scanf("%d%d",&n1, &n2);
    printf("GDC = %d ",GDC(n1,n2));
}
int  GDC(int n1, int n2)
{
    int rem ;

    while(n2!=0)
    {
        rem= n1%n2;
        n1=n2;
        n2=rem;
    }

    return n1;

}
