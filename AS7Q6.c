#include<stdio.h>
int main(){
    int x,y;
    printf("Enter a number :");
    scanf("%d",&x);
    y=x%2;
    if (y==0){
        printf("the entered number is even :)");
    }
    else {
        printf("the entered number is odd :(");
    }
    return 0;
}