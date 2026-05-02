/*NAME:SUMIT BODAKE
PRN:2503033111372L005
BRANCH:EXTC(R)*/

#include<stdio.h>
int main ()
{  
  int length,width,area,perimeter;
  printf("Enter the length :\t");
  scanf("%d" , & length);
  printf("Enter the width :\t");
  scanf("%d" , & width);
  area=length*width;
  perimeter=2*(length+width);
  printf("\n Results:\n");
  printf("Area : %d\n", area );
  printf("perimeter : %d\n", perimeter);
  return 0 ;
}




