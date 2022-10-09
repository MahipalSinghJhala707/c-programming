#include<stdio.h>
int main(){
    int x,y;
    printf("Enter a number :");
    scanf("%d",&x);
    y=x%5;
    if (y==0){
        printf("the entered number is divisible by5:)");
    }
    else {
        printf("the entered number is not divisible by 5 :(");
    }
    return 0;
}