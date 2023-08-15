#include<stdio.h>
int count_digit(int);
int check_armstrong(int,int);
int main(){
    int x,y;
    printf("Enter a number  :");
    scanf("%d",&x);
    y = count_digit(x);
    check_armstrong(x,y);
    return 0;
}

int count_digit(int n){
    int m;
    while(n>0){
        m++;
        n=n/10;
    }
    return m;
}

int check_armstrong(int u,int v){
    int i,rem,a,b,c=0;
    b=u;
    while(u>0){
        rem=u%10;
        a=1;
            for(i=v ; i>0 ; i--){
                a=a*rem;
            }
            c+=a;
        u=u/10;
    }
    if(c==b)
        printf("%d is armstrong no. \n",b);
    
    else
        printf("%d is not an armstrong no. \n",b);
}
