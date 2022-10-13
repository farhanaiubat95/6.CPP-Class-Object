#include <stdio.h>
void main()
{
    int A[20], p, s, c = 0, n;
    printf("How many elements : ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (p = 0; p < n; p++)
    {
        scanf("%d", &A[p]);
    }

    printf("The elements are: \n");
    for (p = 0; p < n; p++)
    {
        printf("%d\t", A[p]);
    }

    printf("\n What are you searching for ? =");
    scanf("%d",&s);
  /*  for(p=0;  p<n; p++)
    {
        if(s==A[p])
        {
            c++;
            break;
        }
    }
if(c==0)
{
    printf("Not found...");
}
else
{
    printf("%d is located  in %d no position ..",s, p+1);
}*/
for (p=0 ; p<n ;p++)
{
    if(s==A[p])
    {
        c++;
         printf("%d is located  in %d no position ..\n",s, p+1);
    }
}
if(c==0)
{
    printf("Not found...\n");
}
else
{
    printf("%d found %d times\n",s,c);
}
}
