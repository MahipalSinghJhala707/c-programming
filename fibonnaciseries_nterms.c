#include<stdio.h>
int fab();
int main(){
    fab();
}
int fab(){
    int x,y,z,w,u;
    printf("how long do you need fibonacci series to be : ");
    scanf("%d",&z);
    x=0;
    y=1;
    w=1;
    while(w<=z){
        if(w==1){
            printf("%d ",x);
            }
        else if(w==2){
            printf("%d ",x+1);
        }
        else {
        u=x+y;
        x=y;
        y=u;
        printf("%d ",u);}
        w++;
        }
}