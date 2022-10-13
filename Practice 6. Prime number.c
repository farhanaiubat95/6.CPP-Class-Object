//prime number
/*#include<stdio.h>
 void main()
 {
     int n,c=0 ,i;
     printf("Enter a number =");
     scanf("%d",&n);

     for(i=2; i<= n/2; i++)
     {
         if(n%i==0)
         {
             c++;
             break;
         }
     }
     if(c==0)
     {
         printf("prime number ");
     }
     else
     {
         printf("not prime number.");
     }
 }*/
 //prime number series
 #include<stdio.h>
 void main()
 {
     int n,j, i,c;
     printf("Enter a rang of number ,1 to untill which you want to show prime number series =");
     scanf("%d",&n);

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

 }
