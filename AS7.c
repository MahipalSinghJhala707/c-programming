/*Question 1
#include<stdio.h>
int main(){
    int firstn, secn;
    printf("Enter two numbers :");
    scanf("%d",&firstn);
    scanf("%d",&secn);
    if (firstn<secn)
    {
        printf("The greater number is : %d",secn);
        }
    else {
        printf("The greater number is : %d",firstn); 

    }
    return 0;
}
*/


/*Question 2
#include<stdio.h>
int main(){
    float x,y,z,a;
    printf("Enter the first number :");
    scanf("%f",&x);
    printf("Enter the second number :");
    scanf("%f",&y);
    printf("For Addition enter 1 :\nFor Subtraction enter 2 :\nFor Multiplication enter 3 :\nFor Division enter 4 :\n");
    printf("Enter your choice here :");
    scanf("%f",&z);
    if (z==1){
        a=x+y;
        printf("The sum of two numbers is :%f",a);
    }
    else if (z==2){
        a=x-y;
        printf("The difference of two numbers is :%f",a);
    }
    else if (z==3){
        a=x*y;
        printf("The product of two numbers is :%f",a);
    }
    else if (z==4){
        a=x/y;
        printf("The Quotient is :%f",a);
    }
    else{
        printf("Enter the valid choice :)");
    }
    return 0;
}
*/


/*Question 3
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number from 1 to 100 :");
    scanf("%d",&x);
    if ((x>50) && (x<100)){
        printf("SUCCESS");
    }
    else if(x>100){
        printf("Please enter the number betwween 1 to 100 :)");
    }
    else {
        printf("FAIL");
    }
}
*/


/*Question 4
#include<stdio.h>
int main(){
    int x;
    printf("Enter a value :");
    scanf("%d",&x);
    if (x<10){
        printf("the value is smaller than 10 :)");
    }
    else if(x>10){
        printf("the value is greater than 10 :)");
    }
    else{
        printf("the value is equal to 10 :)");
    }
}
*/


/*Question 5
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
        printf("the number is positive :)");
    }
    return 0;

}
*/


/*Question 6
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter a number :");
    scanf("%d",&x);
    y=x%2;
    if (y==0){
        printf("the entered number is even :)");
    }
    else {
        printf("the entered number is odd :(");
    }
    return 0;
}
*/


/*Question 7
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter a number :");
    scanf("%d",&x);
    y=x%5;
    if (y==0){
        printf("the entered number is divisible by5:)");
    }
    else {
        printf("the entered number is not divisible by 5 :(");
    }
    return 0;
}
*/


/*Question 8
#include<stdio.h>
int main(){
    int x,y,z,w;
    printf("Enter the coefficient of x^2 :");
    scanf("%d",&x);
    printf("Enter the coefficient of x :");
    scanf("%d",&y);
    printf("Enter the constant :");
    scanf("%d",&z);
    w=(y*y)-(4*x*z);
    if (w==0){
        printf("the roots are real and equal :)");
    }
    else if(w>0){
        printf("the roots are real and distinct :|");
    }
    else {
        printf("the roots are imagenary :(");
    }
    return 0;

}
*/


/*Question 9
#include<stdio.h>
int main(){
float x ,y ,z;
    printf("Enter the cost price :");
    scanf("%f",&x);
    printf("Enter the selling price :");
    scanf("%f",&y);
    z=x-y;
    if (z<0){
        printf("Loss percent :%f :(",(z/x)*100*(-1));
    }
    else if(z==0){
        printf("no profit no loss :|");
    }
    else {
        printf("Profit percent :%f :)",(z/x)*100);
    }
    return 0;printf("Enter the cost price :");
    scanf("%d",&x);
}
*/


/*Question 10*/
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
