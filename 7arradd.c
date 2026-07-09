/*Name- Yash Nandkumar Gawale
PRN No- 2503033111372018 */
#include <stdio.h>
int main(){
    int a[6]={1,4,6,8,9,12};
    int b[6]={5,2,3,9,6,11};
    int sum[6],i;


    for(i=0;i<6;i++){
        sum[i]=a[i]+b[i]; 
    }
    printf("\nSum of Two Array: ");
    for(i=0;i<6;i++){
        printf("%d ",sum[i]);
    }
    return 0;
}