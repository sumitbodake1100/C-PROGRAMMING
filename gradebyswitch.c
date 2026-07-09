/*Name- Yash Nandkumar Gawale
PRN No- 2503033111372018 */
#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks>100){
        printf("Invalid marks entered.\n");
        return 1;
    }
    switch (marks/10){
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F (Fail)\n");
            break;
    }
    return 0;
}