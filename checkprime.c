#include<stdio.h>
int main(){
    int x,y,z,w;
    printf("Enter the a number to check wether it is prime or composite :");
    scanf("%d",&x);
    y=x-1;
    while (w>1)
    {
        while(y>0)
        {
            if (x%y==0){
                printf("%d is not a prime number :) .");
                continue;
            }
            else {
                printf("%d is a prime number :) .");
                break;
            }
            y--;
        }
        w--;
    }
    

}