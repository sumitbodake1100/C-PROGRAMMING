/*NAME:SUMIT BODAKE
PRN:2503033111372L005
BRANCH:EXTC(R)*/

#include<stdio.h>
int main ()
{
	int diameter;
	float Pi=3.14;
	float circumference, area;
	printf("Enter the diameter:\t");
	scanf("%d", & diameter);
	circumference = Pi*diameter;
	area=(Pi*(diameter*diameter)/4);
	printf("circumference:%.2f\n",circumference);
	printf("area:%.2f\n",area);
	return 0;
}
