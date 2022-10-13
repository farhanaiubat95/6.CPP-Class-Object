#include<stdio.h>
void main(){
int x= 5;
int *p;

p= &x;

printf(" value of x is = %d\n",x);
printf(" Address of x is = %d\n",&x);
printf(" value of x is = %d\n",p);
printf(" value of x is = %d\n",*p);
printf(" value of x is = %d\n",&p);


}
