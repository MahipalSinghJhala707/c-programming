#include<stdio.h>
int main(){
    int firstn, secn;
    printf("Enter two numbers :");
    scanf("%d",&firstn);
    scanf("%d",&secn);
    if (firstn<secn)
    {
        printf("The greater number is : %d",secn);
        }
    else {
        printf("The greater number is : %d",firstn); 

    }
    return 0;
}