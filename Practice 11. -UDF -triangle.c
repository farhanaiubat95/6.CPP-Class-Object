#include<stdio.h>
#include<math.h>
float  tri( float a, float b, float c);
void main()
{
    float a,b,c ,Area;
    printf("Enter 3 sides =");
    scanf("%f%f%f",&a,&b,&c);
    Area = tri(a,b,c);
    if (Area!=0)
    {
        printf("The area of Triangle is = %.2f\n",Area);
    }
    else{
           printf("Invalid Traiangle\n");
    }
}
float  tri( float a, float b, float c)
{
    float   s ,area;
    if((a+b>c) && (b+c>a) && (a+c>b))
    {
    s= (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
    }else{
    return 0;
    }
}
