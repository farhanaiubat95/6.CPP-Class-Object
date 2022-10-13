#include<stdio.h>
int  palin(int n);
void main()
{
    int  n,c,p;
    printf("Enter a number . ");
    scanf("%d",&n);
    c=n;
    p = palin(n);
    if(c==p)
    {
        printf("--**--This is a palindrome number .\n");
    }
    else{
        printf("--**--This is not a palindrome number .\n");
    }
}
int  palin(int n)
{
    long long rem ,r=0,m, s=0;
    m=n;
    while(n!=0)
    {
        r++;
        n=n/10;
    }
    printf("-----There are %d digit .\n",r);

    while(m!=0)
    {
        rem=m%10;
        s=rem + (s*10);
        m=m/10;
    }
    return s;
}
