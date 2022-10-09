#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the lenght of first side :");
    scanf("%d",&x);
    printf("enter the lenght of second side :");
    scanf("%d",&y);
    printf("enter the lenght of third side :");
    scanf("%d",&z);
    if ((x+y)>z){
        printf("the triangle is valid :)");
    }
    else {
        printf("the triangle is invalid :(");
    }
    return 0;

}