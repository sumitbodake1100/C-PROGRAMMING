/*Name- Prathmesh Giridhar Panchlinge
PRN No- 2503033111372018 */
#include <stdio.h>
int main(){
    int i,table,num;
    printf("Enter A Number: ");
    scanf("%d",&num);
    
    for(i=1;i<=10;i++){
        table=i*num;
        printf("%d\n",table);
    }
    return 0;
}