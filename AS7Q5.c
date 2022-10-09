#include<stdio.h>
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    if (x<0){
        printf("the number is negative :(");

    }
    else if(x==0){
        printf("the no. is zero :|");
    }
    else{
        printf("the number is positive :)");
    }
    return 0;

}