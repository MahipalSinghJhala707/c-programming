#include<stdio.h>
int tenz = 1;
double power(double, int); 
int main(){
    int z;
    double num,nroot ,x,b=0,i,j=0;
    printf("Enter the no. and the root  you want to find : ");
    scanf("%lf%lf",&num,&nroot);
    x=nroot*1000000;
    while(1){
        z=(long int)x%10;
        
        if(z!=0){
            break;
            }
        
        else{
            
            x=x/10;
        }
    }
    tenz=x/nroot;
    // printf("%lf\n%d\n",x,tenz);
    i=power(num,tenz);
    double num2 = i;
    // printf("%lf",i);
    while(b<num2){
        b=power(j,(int)x);
        j=j+0.0000001;
    }
    printf("Root of number is : %lf",j);
    
}

double power(double num1, int pow){
    double res=1;
    for(int i=pow;i>0;i--){
        res=res*num1;
    }
    return res;
}