#include<stdio.h>
int main(){
float x ,y ,z;
    printf("Enter the cost price :");
    scanf("%f",&x);
    printf("Enter the selling price :");
    scanf("%f",&y);
    z=x-y;
    if (z<0){
        printf("Loss percent :%f :(",(z/x)*100*(-1));
    }
    else if(z==0){
        printf("no profit no loss :|");
    }
    else {
        printf("Profit percent :%f :)",(z/x)*100);
    }
    return 0;printf("Enter the cost price :");
    scanf("%d",&x);
}