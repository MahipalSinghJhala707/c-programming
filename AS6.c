/*Question 1
#include<stdio.h>
void rectangle();
void square();
void circle();
void triangle();
int main(){
    rectangle();
    square();
    circle();
    triangle();
    return 0;
}

void rectangle()
{
    float x,y,z,w;
    printf("Enter the lenght :");
    scanf("%f",&x);
    printf("Enter the breath :");
    scanf("%f",&y);
    z=x*y;
    w=2*(x+y);
    printf("the area of rectangle is %f\nthe peremeter of rectangle is %f\n",z,w);
}

void square()
{
   int x,y,z;
    printf("Enter the side of square :");
    scanf("%d",&x);
    y=x*x;
    z=4*x;
    printf("the area of square is %d\nthe peremeter of square is %d\n",y,z);
}

void circle()
{
    float x,y,z;
    printf("Enter the radius of circle :");
    scanf("%f",&x);
    y=x*x*3.14;
    z=x*3.14*2;
    printf("the area of circle is %f\nthe circumference of circle is %f\n",y,z);
}
void triangle()
{
    int x,y,z,w;
    printf("Enter the first side :");
    scanf("%d",&x);
    printf("Enter the second side :");
    scanf("%d",&y);
    printf("Enter the third side :");
    scanf("%d",&z);
    w=x+y+z;
    printf("the peremeter of the triangle is %d",w);
}
*/


/*Question 2
#include<stdio.h>
void total();
void avg();
void per();
int main(){
    total();
    avg();
    per();
    return 0;
}

void total()
{
   float x,y,z,w,v,u,r,s;
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
    s=x+y+z+w+v;
    printf("the total marks are %f\n",s); 
}

void avg()
{
    float x,y,z,w,v,u,r,s;
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
    r=(x+y+z+w+v)/5;
    printf("the average marks are %f\n",r);
}

void per()
{
  float x,y,z,w,v,u,r,s;
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
    u=((x+y+z+w+v)/500)*100;
    printf("the percentage marks are %f\n",u);
}
*/


/*Question 3
#include<stdio.h>

void add();
void sub();
void mul();
void div();

int main()
{
    add();
    sub();
    mul();
    div();
    return 0;
}

void add()
{
    int x,y,sum;
    printf("enter two integers to add :");
    scanf("%d%d"&x,&y);
    sum=x+y;
    printf("the sum of two integers is %d\n",sum);
}

void sub()
{
    int x,y,sub;
    printf("enter two integers to subtract :");
    scanf("%d%d"&x,&y);
    sub=x-y;
    printf("the difference between two integers is %d\n",sub);
}

void mul()
{
    int x,y,p;
    printf("enter two integers to multiply :");
    scanf("%d%d"&x,&y);
    p=x*y;
    printf("the product of two integers is %d\n",p);
}

void div()
{
    int x,y,q;
    printf("enter two integers to divide :");
    scanf("%d%d"&x,&y);
    q=x/y;
    printf("the quotient is %d\n",q);
}
*/


/*Question 4
#include<stdio.h>

void centi();
void mili();
void inch();

int main()
{
    centi();
    mili();
    inch();
    return 0;
}

void centi()
{
    float x,y;
    printf("Enter the distance :");
    scanf("%f",x);
    y=x*100000;
    printf("the distance in centimetres is %f",y);
}

void mili()
{
    float x,y;
    printf("Enter the distance :");
    scanf("%f",x);
    y=x*1000000;
    printf("the distance in millimetres is %f",y);
}

void inch()
{
    float x,y;
    printf("Enter the distance :");
    scanf("%f",x);
    y=x*1000*39.37;
    printf("the distance in inches is %f",y);
}
*/


/*Question 5*/
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    do
    {
        printf("%d\n",y+1);
        y=y+1;
    } while (y<x);
    
}

