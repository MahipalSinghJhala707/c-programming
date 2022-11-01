/*Question 1
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the month as number :");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("the no. of days are 31.");
        break;
    case 2:
        printf("the no. of days are 28 or 29.");
        break;
    case 3:
        printf("the no. of days are 31.");
        break;
    case 4:
        printf("the no. of days are 30.");
        break;
    case 5:
        printf("the no. of days are 31.");
        break;
    case 6:
        printf("the no. of days are 30.");
        break;
    case 7:
        printf("the no. of days are 31.");
        break;
    case 8:
        printf("the no. of days are 31.");
        break;
    case 9:
        printf("the no. of days are 30.");
        break;
    case 10:
        printf("the no. of days are 31.");
        break;
    case 11:
        printf("the no. of days are 30.");
        break;
    case 12:
        printf("the no. of days are 31.");
        break;
    
    default:
        printf("Month no. are 1 - 12 XD");
        break;
    }
    return 0;
}
*/


/*Question 2
#include<stdio.h>
void add();
void sub();
void mul();
void div();

int main(){
    int c;
    printf("Enter \n 1 for addition of two numbers\n 2 for subtraction of two numbers\n 3 for multiplication of two numbers\n 4 for division of two numbers \n 5 for exit \nHere==>");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        add();
        break;
    case 2:
        sub();  
        break;
    case 3:
        mul();
        break;
    case 4:
        div();
        break;
    case 5:
        break;
    default:
        printf("Enter a valid choice :)");
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
*/


/*Question 3
#include<stdio.h>
int main(){
    int x,y;
    printf(" \t\t\tMENU \n1. Burger \n2. French Fries \n3. Pizza \n4. Sandwiches \n");
    printf("Enter the choice : ");
    scanf("%d",&x);
        switch (x)
    {
    case 1:
        printf("Your order is burger :)\n Quantity :");
        scanf("%d",&y);
        printf("Your order is %d burger and you have to pay %d for it :)",y,y*200);
        break;

    case 2:
        printf("Your order is French Fries :)\n Quantity :");
        scanf("%d",&y);
        printf("Your order is %d french fries and you have to pay %d for it :)",y,y*50);
        break;

    case 3:
        printf("Your order is pizza :)\n Quantity :");
        scanf("%d",&y);
        printf("Your order is %d pizza and you have to pay %d for it :)",y,y*500);
        break;

    case 4:
        printf("Your order is Sandwiches :)\n Quantity :");
        scanf("%d",&y);
        printf("Your order is %d sandwiches and you have to pay %d for it :)",y,y*150);
        break;

    default:
        printf("Enter a valid choice :)");
        break;
    }
    return 0;
}
*/


/*Question 4
#include<stdio.h>
int main(){
    int x;
    printf("Enter the weekday number :");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Have A great Monday :)");
        break;
    
    case 2:
        printf("Have A great Tuesday :)");
        break;

    case 3:
        printf("Have A great Wednesday :)");
        break;

    case 4:
        printf("Have A great Thursday :)");
        break;

    case 5:
        printf("ohhh! aaj toh friday he!!! :)");
        break;
    
    case 6:
        printf("Have A great Saturday :)");
        break;

    case 7:
        printf("Have A great Sunday :)");
        break;
    default:
        printf("Enter a valid choice :(");
        break;
    }
    return 0;

}*/


/*Question 5*/
#include<stdio.h>

int main(){
    int x;

}