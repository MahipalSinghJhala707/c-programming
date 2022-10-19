#include<stdio.h>
int main(){
    int x,y,z,w,v,u;
    z=0;
    y=1;
    v=0;
    u=0;
    printf("enter the no. of terms you want of fibonacci series :");
    scanf("%d",&x);
    while(z<=x){
    printf("%d \n", z);
    w=y+z;
    z=y;
    y=w;
    
}
    return 0;
}