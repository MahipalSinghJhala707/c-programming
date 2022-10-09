#include<stdio.h>
int main(){
    int x;
    printf("Enter a value :");
    scanf("%d",&x);
    if (x<10){
        printf("the value is smaller than 10 :)");
    }
    else if(x>10){
        printf("the value is greater than 10 :)");
    }
    else{
        printf("the value is equal to 10 :)");
    }
}