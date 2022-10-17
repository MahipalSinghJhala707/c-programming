/*Question 1
// Observe the output of every statement
#include<stdio.h>
int main(){
    printf("%lu\n",sizeof(char));
    printf("%lu\n",sizeof(int));
    printf("%lu\n",sizeof(float));
    printf("%lu\n",sizeof(double));

}
*/


/*Question 2
// Observe the output of every statement
#include<stdio.h>
int main(){
    int a=0;
    double d=10.21;
    printf("%lu\n",sizeof(a+d));
    return 0;
}
*/


/*Question 3
#include<stdio.h>
int main(){
    int x,n=0;
    printf("How many times do you want to print Hello world : ");
    scanf("%d",&x);
    do
    {
        printf(" Hellow world\n");
        n=n+1;
    } while (n<x);
    
}
*/


/*Question 4
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
*/


/*Question 5
#include<stdio.h>
int main(){
    int x,y,z,w,u;
    printf("Enter the number of pairs you want to sum : ");
    scanf("%d",&x);
    y=0;
    while (y<x)
    {
        printf("enter two values : ");
        scanf("%d%d",&w,&u);
        z=w+u;
        printf("the sum = %d\n",z);
        y=y+1;

    }
    return 0;
}
*/


/*Question 6
#include<stdio.h>
int main(){
    int x,y=1;
    printf("enter a number to find its factorial :");
    scanf("%d",&x);
    while(x>1){
        y=y*x;
        x=x-1;
    }
    printf("%d",y);
    return 0;
}
*/

/*Question 7
#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter a number :");
    scanf("%d",&x);
    y=x%10;
    z=x-y;
    printf("the value after the operation :");
    return 0;
}
*/


/*Question 8
#include<stdio.h>
int main (){
    int y=10;
    while (y>0){
        printf("%d\n",y);
        y=y-1;
    }
}
*/


/*Question 9
#include<stdio.h>
int main(){
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    while (x>0)
    {
        printf("%d\n",x);
        x=x-1;

    }
}
*/

    
/*Question 10
#include<stdio.h>
int main(){
    int x,y;
    y=20;
    x=1;
    while (x<y)
    {
        printf("%d\n",x);
        x=x+2;
    }
}
*/


/*Question 11
#include<stdio.h>
int main(){
    int x;
    x=19;
    while (x>0)
    {
        printf("%d\n",x);
        x=x-2;
    } 
}
*/


/*Question 12
#include<stdio.h>
int main(){
    int x,y;
    y=20;
    x=2;
    while (x<=y)
    {
        printf("%d\n",x);
        x=x+2;
    }
}
*/


/*Question 13
#include<stdio.h>
int main(){
    int x;
    x=20;
    while (x>0)
    {
        printf("%d\n",x);
        x=x-2;
    } 
}
*/


/*Question 14 
#include<stdio.h>
int main(){
    int x,y,z;
    y=20;
    x=2;
    z=1;
    while (x<=y)
    {
        printf("2*%d=%d\n",z,x);
        x=x+2;
        z++;
    }

}
*/


/*Question 15*/
#include<stdio.h>
int main (){
    int y=1;
    while (y<=10){
        printf("The square of %d is %d\n",y,y*y);
        y=y+1;
    }
    return 0;
}
