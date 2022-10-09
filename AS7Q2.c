#include<stdio.h>
int main(){
    float x,y,z,a;
    printf("Enter the first number :");
    scanf("%f",&x);
    printf("Enter the second number :");
    scanf("%f",&y);
    printf("For Addition enter 1 :\nFor Subtraction enter 2 :\nFor Multiplication enter 3 :\nFor Division enter 4 :\n");
    printf("Enter your choice here :");
    scanf("%f",&z);
    if (z==1){
        a=x+y;
        printf("The sum of two numbers is :%f",a);
    }
    else if (z==2){
        a=x-y;
        printf("The difference of two numbers is :%f",a);
    }
    else if (z==3){
        a=x*y;
        printf("The product of two numbers is :%f",a);
    }
    else if (z==4){
        a=x/y;
        printf("The Quotient is :%f",a);
    }
    else{
        printf("Enter the valid choice :)");
    }
    return 0;
}