/*NAME:SUMIT BODAKE
PRN:2503033111372L005
BRANCH:EXTC(R)*/

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