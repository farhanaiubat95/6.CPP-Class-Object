#include<stdio.h>
int  amst(int n);
void main()
{
    long long   o,n,sum;
    printf("Enter  a number =");
    scanf("%lld",&n);
    o=n;
    sum = amst(n);
    if(o==sum)
      {
          printf("------This is a  Amstrong number .-------");
      }
      else
      {
           printf("-----This is not a  Amstrong number .------");
      }
      getch();
}
 int amst(int n)
{
    long long  m,c=0,rem,mul,sum=0;
    m=n;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    printf("There are %lld digit .\n",c);

    do
    {
        rem= m%10;
        mul=rem*rem*rem;
        sum= mul+sum;
        m=m/10;
    } while(m!=0);
    printf("******The total number after multiplied by itself = %lld\n \n",sum);

    return sum;
}
