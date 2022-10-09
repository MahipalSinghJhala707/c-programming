/*Question 1
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter three numbers :");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if ((x<z) && (y<z)){
        printf("the greatest value is %d",z);
    }
    else if ((x<y) && (z<y)){
        printf("the greatest value is %d",y);
    }
    else if((y<x) && (z<x)){
        printf("the greatest value is %d",x);
    }
    return 0;

}
*/

/*Question 2
#include<stdio.h>
int main(){
    float x,y,z,w,v,u;
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
    u=(x+y+z+w+v)/5;
    if (u>=33){
        printf("pass");
    }
    else {
        printf("fail");
    }
    return 0;
}
*/

/*Question 3
#include<stdio.h>
int main(){
    int x;
    printf("Enter the marks of first subject :");
    scanf("%d",&x);
    if ((x%2==0) && (x%3==0)){
       printf("divisible by 2 and 3");
    }
    else {
       printf("not divisible by 2 and 3");
    }
    return 0;
}
*/

/*Question 4
#include<stdio.h>
int main(){
    int x;
    printf("Enter the marks of first subject :");
    scanf("%d",&x);
    if ((x%7==0) || (x%3==0)){
       printf("divisible by 7 or 3");
    }
    else {
       printf("not divisible by 7 or 3");
    }
    return 0;
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
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the month as number :");
    scanf("%d", &x);
    if ((x==1) ||(x==3) || (x==5) || (x==7) || (x==8) || (x==10) || (x==12))
    {
        printf("the no. of days are 31.");
    }
    else if(x == 2){
        printf("the no. of days are 28 or 29 .");
    }
    else if((x==4) ||(x==6) || (x==9) || (x==11)){
        printf("the no. of days are 30 .");
    }
    else{
        printf("the month no. are 1 to 12 .");
    }
    return 0;
}
*/

/*Question7
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the amount in INR :");
    scanf("%d",&x);
    y=x/80;
    printf("the amount in USD is %d",y);
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
    int x,y;
    printf("Enter a number ;");
    scanf("%d",&x);
    y=x%10;
    printf("The unit digit is %d",y);
    return 0;
}
*/

/*Question 10*/
#include<stdio.h>
int main(){
    int x;
    printf("Enter week day  number :");
    scanf("%d",&x);
    if (x==1){
        printf("monday");
    }
    else if (x==2){
        printf("tuesday");
    }
    else if (x==3){
        printf("wednesday");
    }
    else if (x==4){
        printf("thursday");
    }
    else if (x==5){
        printf("friday");
    }
    else if (x==6){
        printf("saturday");
    }
    else if (x==7){
        printf("sunday");
    }
    else {
        printf("week no. are 1 to 7 :(");
    }
    return 0;
}