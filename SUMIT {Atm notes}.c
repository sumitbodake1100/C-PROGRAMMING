/*NAME:SUMIT BODAKE
PRN:2503033111372L005
BRANCH:EXTC(R)*/

#include <stdio.h>
int main(){
	int Qt,R1,Qf,R2,Qh,amt;
	printf("ENTER THE AMOUNT:\t");
	scanf("%d",& amt);
	
	Qt=amt/1000;
//	printf("\nQt is %d",Qt);
	
	R1=amt%1000;
//	printf("\nR1 is %d", R1);
	
	Qf=R1/500;
//	printf("\nQf is %d",Qf);
	
	R2=R1%500;
//	printf("\nQf is %d",R2);
	
	Qh=R2/100;
//	printf("\nQh is %d", Qh);
	
	printf("1000 rs notes =%d\n500 rs notes =%d\n100 rs notes =%d",Qt,Qf,Qh);
	return 0;
}
