#include<stdio.h>
int count_digit(int);
int check_armstrong(int,int);
int main(){
    int x,y,z,j=0;
    printf("Enter a number upto you want armstrong series :");
    scanf("%d",&x);
    
        while(x>0){
            y=count_digit(j);
            z=check_armstrong(j,y);
            if(z==j){
                printf("%d  ",j);
            x--;   
            }
            j++;
            }

}

int count_digit(int n){
    int m;
    while(n>0){
        n=n/10;
        m++;
    }
    return m;
}
int check_armstrong(int u,int v){
    int i,rem,a,b,c=0;
    while(u>0){
        rem=u%10;
        a=1;
            for(i=v ; i>0 ; i--){
                a=a*rem;
            }
            c+=a;
        u=u/10;
    }
    return c;
}