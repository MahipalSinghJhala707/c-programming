#include<stdio.h>
int main(){
    int x=1,y,z,w,u;
    printf("the prime numbers between 1 to 100 are\n");
    printf("2\n3\n5\n7\n");
    for (y = 2; y < 100; y++)
    {
        if ((y%2!=0) && (y%3!=0) && (y%5!=0) && (y%7!=0)){
            printf("%d\n",y);
        }
    }
}