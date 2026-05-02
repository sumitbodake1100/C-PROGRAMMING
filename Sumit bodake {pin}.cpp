/*NAME:SUMIT BODAKE
PRN:2503033111372L005
BRANCH:EXTC(R)*/

#include <stdio.h>
#include <conio.h>
  int main ()
  {
  	int s_pin,u_pin;
  	s_pin=4545;
  	printf("ENTER THE PIN : \t");
  	scanf("%d",&u_pin);
  	if (s_pin==u_pin){
  		printf("CORRECT PIN");
	  }
	  else{
	  	printf("INCORRECT PIN");
	  }
	  return 0;
  }
