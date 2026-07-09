/*Name- Yash Nandkumar Gawale
PRN No- 2503033111372018 */
#include<stdio.h>
int main(){
	int a[10],b[10],even[10],odd[10],e=0,o=0,i;
	for(i=0;i<10;i++){
		printf("Enter value at index %d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2 == 0){
			even[e]=a[i];
			e++;
		}
		else{
			odd[o]=a[i];
			o++;
		}
	}
	printf("\nEVEN No: ");
	for(i=0; i<e; i++){
		printf("%d\t",even[i]);
	}
	printf("\nODD No : ");
	for(i=0; i<o; i++){
		printf("%d\t",odd[i]);
	}	
	return 0;
}