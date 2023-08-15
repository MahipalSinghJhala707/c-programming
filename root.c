#include<stdio.h>

double power(double num, int pow); 
int main(){
    int a,root;
    double i=0,b=0,r;
    printf("Enter a  number :");
    scanf("%d",&a);
    printf("Enter root :");
    scanf("%d",&root);
    while(b<a){
        b=power(i,root);
        i=i+0.0000001;
    }
    printf("Root of number is : %lf",i);
}
double power(double num, int pow){
    double res=1;
    for(int i=pow;i>0;i--){
        res=res*num;
    }
    return res;
}

