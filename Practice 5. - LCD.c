//LCD-Least Common multiple.
#include<stdio.h>
int LCD(int n1, int n2);
void main(){
int  n1,n2 ;
printf("Enter 2 numbers =");
scanf("%d%d",&n1,&n2);
printf("---**---LCD =  %d---**---", LCD(n1,n2));

}
int LCD(int n1, int n2)
{
    int x,y ,GCD,rem,lcd;
    x=n1;
    y=n2;

    while(n2!=0)
    {
        rem= n1%n2;
        n1=n2;
        n2=rem ;
    }
    printf(".....GDC=  %d....\n",n1);
    lcd =  (x*y)/n1;

    return lcd;
}
