/*NAME:SUMIT BODAKE
PRN:2503033111372L005
BRANCH:EXTC(R)*/

#include<stdio.h>
int main(){
	int num,rem;
	printf("ENTER THE NUMBER:\t");
	scanf("%d",&num);
	
	rem=num%2;
	if(rem==0){
		printf("GIVEN NUMBER IS EVEN");
	}
	else{
		printf("GIVEN NUMBER IS ODD");
	}
   return 0;
}
