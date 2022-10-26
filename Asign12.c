/*Question 1
#include<stdio.h>
int main(){
    int x,i;
    printf("How many times do you want to print Hello world : ");
    scanf("%d",&x);
    for  (i = 0; i < x ; i++)
    {
        printf("hellow world \n");
    }
    
    return 0;
    
}
*/


/*Question 2
#include<stdio.h>
int main(){
    int x,i;
    printf("Enter a number : ");
    scanf("%d",&x);
    for  (i = 0; i < x; i++)
    {
        printf("%d\n",i+1);
    }
    
    
}
*/


/*Question 3
#include<stdio.h>
int main(){
    int x,y,z,w,u;
    printf("Enter the number of pairs you want to sum : ");
    scanf("%d",&x);
    for (y = 0; y < x; y++)
    {
        printf("enter two values : ");
        scanf("%d%d",&w,&u);
        z=w+u;
        printf("the sum = %d\n",z);
    }

    return 0;
}
*/


/*Question 4
#include<stdio.h>
int main(){
    int x,y=1;
    printf("enter a number to find its factorial :");
    scanf("%d",&x);
    for (x; x > 1; x--)
    {
        y=y*x;
    }
    printf("the factorial is : %d",y);
    
    return 0;
}
*/


/*Question 5
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


/*Question 6
#include<stdio.h>
int main (){
    int y;
    for ( y = 10 ;y > 0; y--)
    {
      printf("%d\n",y);  
    }
    return 0;

}
*/


/*Question 7
#include<stdio.h>
int main(){
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    for ( x; x >0; x--)
    {
        printf("%d\n",x);
    }
    return 0;
    }
*/


/*Question 8
#include<stdio.h>
int main(){
    int x,y;
    y=20;
for ( x = 1; x < y; x+=2)
{
    printf("%d\n",x);
}
}
*/


/*Question 9
#include<stdio.h>
int main(){
    int x;
    for (x = 19; x> 0; x-=2)
    {
        printf("%d\n",x);
    }
    return 0;
}
*/
    

/*Question 10
#include<stdio.h>
int main(){
    int x,y;
    y=20;
    for (x = 0; x <=y; x+=2)
    {
        printf("%d\n",x);
    }
    return 0;
}
*/


/*Question 11
#include<stdio.h>
int main(){
    int x;
    for (x=20; x >0; x-=2)
    {
        printf("%d\n",x);
    }
    return 0;
}
*/


/*Question 12
#include<stdio.h>
int main(){
    int x,y,z;
    y=20;
    z=1;
    for (x=2; x <= y; x+=2)
    {
       printf("2*%d=%d\n",z,x);
        z++; 
    }
   return 0; 

}
*/


//Question 13
#include<stdio.h>
int main (){
    int y;
    for (y=1; y<=10; y++)
    {
        printf("The square of %d is %d\n",y,y*y);
    }
    return 0;
 
}
