#include<stdio.h>
int main(){
    double i=0,b=0;
    double a;
    printf("Enter here  : ");
    scanf("%lf",&a);
    while(b<a){
        b=i*i;
        i=i+0.0000001;
    }
    printf("%lf",i);
}