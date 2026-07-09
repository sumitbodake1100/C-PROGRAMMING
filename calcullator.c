/*Name- Yash Nandkumar Gawale
PRN No- 2503033111372018 */
#include<stdio.h>
int main (){
 int i,num,fact=1;
  printf("Enter number: ");
  scanf("%d",&num);

 for (i=1;i<=num;i++){
    fact=fact*i;
 }

  printf("Factorial: %d",fact);
return 0;
}
#include<stdio.h>
int main(){
  int a,b,add,sub,mul,modulus;
  float div;

  printf("Enter first number: ");
  scanf("%d",&a);

  printf("Enter second number: ");
  scanf("%d",&b);

  add=a+b;
  printf("Sum: %d\n",add);

  sub=a-b;
  printf("Difference: %d\n",sub);

  mul=a*b;
  printf("Product: %d\n",mul);

  div=(float)a / b;
  printf("Quotient: %f\n",div);

  modulus=a % b;
  printf("Modulus: %d\n",modulus);

  return 0;
}