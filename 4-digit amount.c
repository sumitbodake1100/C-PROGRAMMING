#include<stdio.h>
int main()
{
int p,q,r,s,t,u;
printf("enter the 4 digit amount:\t");
 scanf("%d",&p);
 q= p/1000;
 r=p%1000;
 s=r/500;
 t=r%500;
 u=t/100;
 printf("the amount %d will required\n 1000= %d notes\n 500= %d notes\n 100= %d notes\n",p,q,s,u);
 return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
