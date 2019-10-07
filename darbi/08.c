#include<stdio.h>

void main()
{
int a=95;
printf("Operacija ++: %d++1 rezultats %d\n",a,a++);
int b=95;
printf("Operacija --: %d--1 rezultats %d\n",b,b--);
int c=95;
printf("Operacija -: %d-1 rezultats %d\n",c,c-1);
int d=95;
printf("Operacija +: %d+1 rezultats %d\n",d,d+1);
int e=95;
printf("Operacija !: %d+!1 rezultats %d\n",e,e+!1);
int f=95;
printf("Operacija %: %d%37 rezultats %d\n",f,f%37);
int g=95;
printf("Operacija &: %d&128 rezultats %d\n",g,g&128);
int h=95;
printf("Operacija ?:: %d?:1 rezultats %d\n",h,h?:1);
int i=95;
printf("Operacija ||: %d||95 rezultats %d\n",i,i||95);

}
