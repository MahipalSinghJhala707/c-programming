/*Question 1
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x :");
    scanf("%d",&x);
    printf("Enter y :");
    scanf("%d",&y);
    if (y<x){
        if((x>500) && (x<1000)){
            printf("the greater number is %d",x);
        }
    }
    else if(x<y){
        if((y>500) && (y<1000)){
            printf("the greater number is %d",y);
        }
    }
    return 0;
}
*/

/*Question 2
#include<stdio.h>
int main(){
    float x,y,z,w,v,u,r;
    printf("Enter the marks of first subject :");
    scanf("%f",&x);
    printf("Enter the marks of second subject :");
    scanf("%f",&y);
    printf("Enter the marks of third subject :");
    scanf("%f",&z);
    printf("Enter the marks of fourth subject :");
    scanf("%f",&w);
    printf("Enter the marks of fifth subject :");
    scanf("%f",&v);
    r=(x+y+z+w+v);
    u=r/5;
    if (u>=33){
        printf("passed the exam :)\n");
        printf("the total marks are %f",r);
    }
    else {
        printf("failed the exam :(");
    }
    return 0;
}
*/

/*Question 3
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    if (x%2==0){
        if (x%3==0){
            printf("the number is even and divisible by 2 and 3");
        }
        else {
            printf("the number is even and divisible by 2 and not 3");
        }
    }
    else if (x%2==1){
        if(x%5==0){
            printf("the number is odd and divisible by 5");
        }
        else {
            printf("the number is odd and not divisible by 5");
        }
    }
    else {
        printf("Enter a integer");
    }
}
*/

/*Question 4
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    if (x<0){
        printf("the number is negative :(");

    }
    else if(x==0){
        printf("the no. is zero :|");
    }
    else{
        if (x%10==0){
            printf("the number is positive  and divisible by 10 :)");
        }
        else {
            printf("the number is positive but not divisible by 10 :|");
        }
    }
    return 0;

}
*/

/*Question 5
#include<stdio.h>
int main(){
    int x;
    printf("Enter a year :");
    scanf("%d",&x);
    if (x%4==0){
        printf("%d is a leap year .",x);
    }
    else {
        printf("%d is not a leap year",x);
    }
    return 0;
}
*/

/*Question 6
#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the lenght of first side :");
    scanf("%d",&x);
    printf("enter the lenght of second side :");
    scanf("%d",&y);
    printf("enter the lenght of third side :");
    scanf("%d",&z);
    if (((x+y)>z) && ((x+z)>y) && ((z+y)>x)){
        printf("the triangle is valid :)");
    }
    else {
        printf("the triangle is invalid :(");
    }
    return 0;

}
*/

/*Question 7
#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the lenght of first side :");
    scanf("%d",&x);
    printf("enter the lenght of second side :");
    scanf("%d",&y);
    printf("enter the lenght of third side :");
    scanf("%d",&z);
    if (((x+y)>z) && ((x+z)>y) && ((z+y)>x)){
        if ((x==y) && (y==x) && (x==z))
        {
        printf("Equilateral traingle");
        }
        else if (((x==y) && (x!=z)) || ((x==z) && (x!=y)) || ((y==z) && (y!=x))){
        printf("Isosceles triangle");
        }
        else {
        printf("Scalene triangle");
        }
    }
    else {
        printf("the triangle is invalid :(");
    }
    return 0;
}
*/


/*Question 8
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of first variable :");
    scanf("%d",&x);
    printf("Enter the value of second variable :");
    scanf("%d",&y);
    printf("After the swap the value of first variable is %d\nthe value of first variable is %d",y,x);
    return 0;
}
*/

/*Question 9
#include<stdio.h>
int main(){
    int x,y,z,w,v;
    printf("Enter a number ;");
    scanf("%d",&x);
    y=x%10;
    z=x%100;
    v=z-y;
    w=v/10;
    printf("The unit digit is %d\nthe thenth digit is %d",y,w);
    return 0;
}
*/

/*Question 10
#include <stdio.h>
int main()
{
    float x, y, z, w, u, v, t, s, r;
    printf("Enter the number of units consumed :");
    scanf("%f", &x);
    z = 0;
    w = 0;
    u = 0;
    v = 0;

    if (x > 50)
    {
        y = 50 * 0.5;
        x = x - 50;
        if (x > 100)
        {
            z = 100 * 0.75;
            x = x - 100;
            if (x > 100)
            {
                w = 100 * 1.2;
                x = x - 100;
                if (x > 0)
                {
                    v = x * 1.5;
                }
            }
            else
            {
                u = x * 1.2;
            }
        }
        else
        {
            z = x * 0.75;
        }
    }
    else
    {
        y = x * 0.5;
    }
    t = y + z + w + u + v;
    s = t * 0.2;
    r = t + s;
    printf("The amount of your electricity bill is %f", r);
    return 0;
}
*/
