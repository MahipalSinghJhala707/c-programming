#include<stdio.h>
int main(){
    int x=1,y,z,w,u,n,m;
    printf("Enter the range of prime numbers you want :");
    scanf("%d%d",&n,&m);
    printf("Prime numbers between %d and %d are\n",n,m);
    for (y = n; y < m; y++)
    {
        if ((y==2) || (y==3)|| (y==5) || (y==7)){
            printf("%d\n",y);
        }
        if ((y%2!=0) && (y%3!=0) && (y%5!=0) && (y%7!=0)){
            printf("%d\n",y);
        }

    }
}