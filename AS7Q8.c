#include<stdio.h>
int main(){
    int x,y,z,w;
    printf("Enter the coefficient of x^2 :");
    scanf("%d",&x);
    printf("Enter the coefficient of x :");
    scanf("%d",&y);
    printf("Enter the constant :");
    scanf("%d",&z);
    w=(y*y)-(4*x*z);
    if (w==0){
        printf("the roots are real and equal :)");
    }
    else if(w>0){
        printf("the roots are real and distinct :|");
    }
    else {
        printf("the roots are imagenary :(");
    }
    return 0;

}