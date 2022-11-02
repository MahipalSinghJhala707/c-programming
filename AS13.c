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


/*Question 5
#include<stdio.h>

int main(){
    int x,y,z,u;
    printf("\t\t\tMENU \n");
    printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not \n");
    printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not \n");
    printf("3. Check whether a given set of three numbers are equilateral triangle or not \n");
    printf("4. Exit \n");
    printf("Enter the choice here : ");
    scanf("%d",&u);
    switch (u)
    {
    case 1:
        printf("enter the lenght of first side :");
        scanf("%d",&x);
        printf("enter the lenght of second side :");
        scanf("%d",&y);
        printf("enter the lenght of third side :");
        scanf("%d",&z);
        if (((x+y)>z) && ((x+z)>y) && ((z+y)>x)){
            if (((x==y) && (x!=z)) || ((x==z) && (x!=y)) || ((y==z) && (y!=x))){
            printf("Isosceles triangle");
            }
            else{
                printf("the triangle is not isosceles :(");
            }
        }
        else {
            printf("the triangle is invalid :(");
        }
            break;
    
    case 2:
        printf("enter the lenght of hypotnuse :");
        scanf("%d",&x);
        printf("enter the lenght of base :");
        scanf("%d",&y);
        printf("enter the lenght of perpendicular :");
        scanf("%d",&z);
        if (((x+y)>z) && ((x+z)>y) && ((z+y)>x)){
            if (x*x==(y*y)+(z*z))
            {
                printf("Right angled triangle");
            }
            else{
                printf("the triangle is not right angled :(");
            }
        }
        else {
            printf("the triangle is invalid :(");
        }
        break;
    
    case 3:
        printf("enter the lenght of first side :");
        scanf("%d",&x);
        printf("enter the lenght of second side :");
        scanf("%d",&y);
        printf("enter the lenght of third side :");
        scanf("%d",&z);
        if (((x+y)>z) && ((x+z)>y) && ((z+y)>x)){
            if ((x==y) && (y==x) && (x==z))
            {
                printf("Equilateral triangle");
            }
            else{
                printf("the triangle is not equilateral :(");
            }
        }
        else {
            printf("the triangle is invalid :(");
        }
        break;
    case 4:
        printf("You are out  of the program ");
        break;

    default:
    printf("Invalid input ");
        break;
    }
}
*/


/*Question 6
#include<stdio.h>
int main(){
    int var;
    printf("Input a variable ");
    scanf("%d",&var);
    switch (var){
        case 1:
        printf("good");
        break;

        case 2:
        printf("better");
        break;

        case 3:
        printf("best");
        break;

        default:
        printf("invalid");
        break;
    }
}
*/


/*Question 7
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the year to check if it is leap or not :");
    scanf("%d",&x);
    y=x%4;
    switch (y)
    {
    case 0:
        printf("The entered year is a leap year .");
        break;
    
    default:
        printf("The entered year is not a leap year .");
        break;
    }
    return 0;
}
*/


/*Question 8
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter a number ;");
    scanf("%d",&x);
    if (x!=0)
        y=1;
    switch (y)
    {
    case 1:
        printf("%d",-x);
        break;

    default:
        printf("%d",x);
        break;
    }
    return 0;
}
*/


/*Question 9
#include<stdio.h>
#include<math.h>

int main(){
    int x,y,z,w,u=2,r1,r2;
    printf("Enter the coefficient of x^2 :");
    scanf("%d",&x);
    printf("Enter the coefficient of x :");
    scanf("%d",&y);
    printf("Enter the constant :");
    scanf("%d",&z);
    w=(y*y)-(4*x*z);
    if (w==0){
        printf("the roots are real and equal :)\n");
        u=0;
    }
    else if(w>0){
        printf("the roots are real and distinct :|\n");
        u=1;
    }
    else {
        printf("the roots are imagenary which does not exists sorry :(\n");
    }

    switch (u)
    {
    case 0:
        r1=((-y)+sqrt(w))/(2*x);
        r2=((-y)-sqrt(w))/(2*x);
        printf("The roots are %d , %d",r1,r2);
        break;
    
    case 1:
        r1=((-y)+sqrt(w))/(2*x);
        r2=((-y)-sqrt(w))/(2*x);
        printf("The roots are %d , %d",r1,r2);
        break;
    }
    return 0;
}
*/