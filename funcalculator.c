#include<stdio.h>
void add();
void sub();
void mul();
void div();

int main(){
    int c;
    printf("Enter \n 1 for addition of two numbers\n 2 for subtraction of two numbers\n 3 for multiplication of two numbers\n 4 for division of two numbers \n Here==>");
    scanf("%d",&c);
    switch (c)
    {
    case 1:{
        add();
    }
        break;
    case 2:{
        sub();  
    }
        break;
    case 3:{
        mul();
    }
        break;
    case 4:{
        div();
    }
        break;
    
    default:{
        printf("Enter a valid choice :)");
    }
        break;
    }
}

void add(){
    int x,y,z;
    printf("Enter two number :");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("the sum is :%d",z);
}

void sub(){
    int x,y,z;
    printf("Enter two number :");
    scanf("%d%d",&x,&y);
    z=x-y;
    printf("the difference is :%d",z);
}

void mul(){
    int x,y,z;
    printf("Enter two number :");
    scanf("%d%d",&x,&y);
    z=x*y;
    printf("the product is :%d",z);
}

void div(){
    float x,y,z,w;
    printf("Enter two number :");
    scanf("%d%d",&x,&y);
    z=x/y;
    printf("the Quotient  is :%f",z);
}