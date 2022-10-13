//amstrong series
#include<stdio.h>
void main()
{
long long i , s, n,m,rem,mul;
    printf("Enter a number =");
    scanf("%lld",&n);

    for(i=1 ;i<=n; i++)
    {
        s=0;
           m=i;
  do
  {
      rem= m%10;
      mul=rem*rem*rem;
      s= mul + s;
      m=m/10;

  }while(m!=0);

  if (s==i)
  {
      printf("%lld,\t\n",i);

  }
}
}
