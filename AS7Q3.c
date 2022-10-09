#include<stdio.h>
int main(){
    int x;
    printf("Enter a number from 1 to 100 :");
    scanf("%d",&x);
    if ((x>50) && (x<100)){
        printf("SUCCESS");
    }
    else if(x>100){
        printf("Please enter the number betwween 1 to 100 :)");
    }
    else {
        printf("FAIL");
    }
}