#include<stdio.h>
int main(){
    int x,y,z,w,u;
    printf("how long do you need fibonacci series to be");
    scanf("%d",&z);
    x=0;
    y=1;
    w=0;
    if (z==1){
        printf("%d ",x);
    }
    else if (z==2){
        printf("%d %d",x,x+1);
        
    }
    
    else {
        printf("%d %d ",x,x+1);
        while(w<=z-3){
            u=x+y;
            printf("%d ",u);
            u=x+y;
            x=y;
            y=u;
            w+=1;
        }
    }
}