/*Name- Yash Nandkumar Gawale
PRN No- 2503033111372018 */
#include<stdio.h>
int main(){
	int a[3][3]={71,89,64,53,20,89,45,37,27};
	int b[3][3]={84,11,56,70,29,75,82,43,69};
	int c[3][3];
	int i,j;
		for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	return 0;
}