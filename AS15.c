/*Question 1
#include<stdio.h>
int area(int y);
int main(){
    int x,z;
    printf("Enter the radius of circle :");
    scanf("%d",&x);
    z=area(x);
    printf("Area is %d unit sq. X_X \n",z);
    return 0;
}

int area(int y) {
    return (y*y)*3.14;
}
*/


/*Question 2
#include<stdio.h>
int simpleintrest(int p,int t,int r);
int main(){
    int x,y,z,u;
    printf("Enter the principle amount :");
    scanf("%d",&x);
    printf("Enter the anual intrest rate in percentage :");
    scanf("%d",&y);
    printf("Enter the time period in years :");
    scanf("%d",&z);
    u=simpleintrest(x,y,z);
    printf("The simple intrest is %d ",u);
    return 0;
}

int simpleintrest(int p,int t,int r){
    return (p*r*t)/100;
}
*/


/*Question 3
#include<stdio.h>
int eveodd(int n);
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    printf("%d",eveodd(x));
}
int eveodd(int n){
    if(n%2==0)
        return 1;
    else
        return 0;
}
*/


/*Question 4
#include<stdio.h>
void natural(int i);
int main(){
    int x;
    printf("Enter the number of first natural numbers you want to print :");
    scanf("%d",&x);
    natural(x);
    return 0;
}

void natural(int y){
    for (int i = 1; i <= y ; i++)
    {
        printf("%d\n",i);
    }
    
}
*/


/*Question 5
#include<stdio.h>
void natural(int i);
int main(){
    int x;
    printf("Enter the number of first odd natural numbers you want to print :");
    scanf("%d",&x);
    natural(x);
    return 0;
}

void natural(int y){
    for (int i = 1; i <= 2*y ; i+=2)
    {
        printf("%d\n",i);
    }
    
}
*/


/*Question 6
#include<stdio.h>
int fact(int f);
int main(){
    int x,y;
    printf("Enter a number to find its factorial :");
    scanf("%d",&x);
    y=fact(x);
    printf("%d",y);
}
 int fact(int f){
    int m=1;
    while (f>1)
    {
        m=m*f;
        f--;
    }
    return m;
 }
 */


/*Question 7
#include<stdio.h>
int mul(int n,int m);
int fact(int f);
int main(){
    int x,y,z;
    printf("Enter the no. of items ;");
    scanf("%d",&x);
    printf("Enter the no. of items selected ;");
    scanf("%d",&y);
    z=mul(x,y);
    printf("the no. of combinations are %d",z);
}
 int fact(int f){
    int u=1;
    while (f>1)
    {
        u=u*f;
        f--;
    }
    return u;
 }

int mul(int n,int m){
    int v,b;
    b=n-m;
    v=fact(n)/(fact(m)*fact(b));
    return v;
}
*/


/*/Question 8
#include<stdio.h>
int mul(int n,int m);
int main(){
    int x,y,z;
    printf("Enter the no. of items ;");
    scanf("%d",&x);
    printf("Enter the no. of items selected ;");
    scanf("%d",&y);
    z=mul(x,y);
    printf("the no. of Arrangements are %d",z);
}

int fact(int f){
    int u=1;
    while (f>1)
    {
        u=u*f;
        f--;
    }
    return u;
 }

int mul(int n,int m){
    int v,b;
    b=n-m;
    v=fact(n)/fact(b);
    return v;
}*/



/*Question 9
#include<stdio.h>
int check(int,int);
int main(){
    int num , digit, z;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Enter the  you want to check :");
    scanf("%d",&digit);
    z=check(num,digit);
    if (z==1){
        printf("The number contains the desired digit :) ");
    }
    else {
        printf("The number does not contains the desired digit :) ");
    }
}

int check(int x,int y)
{
    while(x>0){
        int v=x%10;
        if(v==y){
            return 1;
        }
        x=x/10;
    }
    return 0;
}*/


/*Question 10
#include<stdio.h>
int fact(int);
int check(int);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    fact(num);
}
int fact(int n){
    int i=2,b;
    while(i<=n){
        if(n%i==0){
            check(i);
            n=n/i;
        }
        else if(n%i==1){
            i++;
        }
    }
}
int check (int x){
    int b=2,c,m=0;
    if(x==0 || x==1){
        m=0;
    }
    else if(x==2){
        m=1;
    }
    else{
        while(b<x){
            m=x%b;
            if(m==0){
                break;
            }
            else{
                b++;
            }
        }
    }
    if(m==0){
    }
    else{
    printf("%d  ",x);
    }
}
*/


/*Question 11
#include<stdio.h>
int lcm(int, int); 
int main()
{
    int x,y;
 
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    lcm(x,y);
    return 0;
}
int lcm(int a, int b){
    for(int i = 1 ; i>0; i++){
        if ((i%a==0) && (i%b==0)){
            printf("The LCM of %d and %d is %d",a,b,i);
            break;
        }
    }
}
*/


/*Question 12
#include<stdio.h>
int hcf(int, int);
int main(){
    int x,y;
    printf("Enter two numbers to find their HCF :");
    scanf("%d%d",&x,&y);
    hcf(x,y);
}
int hcf(int n, int m){
    int z;
    for (int i = 2; i <= n && i <=m ; i++)
    {
        if (n%i==0 && m%i==0){
            z=i;
        }
    }
    printf("The hcf of %d and %d is %d",n,m,z);   
}
*/


/*Question 13
#include<stdio.h>
int check(int);
int main(){
    int n;
    printf("Enter a number to check if it is prime or not :");
    scanf("%d",&n);
    check(n);
}
int check(int x){
int y, z = 0;
  if (x == 0 || x == 1)
    z = 1;
  for (y = 2; y < x ; ++y) {
    if (x % y == 0) {
      z = 1;
      break;
    }
  }

  if (z == 0){
    printf("%d is a prime number. :) ", x);
    }
  else{
    printf("%d is not a prime number. :(", x);
    }
}
*/


/*Question 14
#include<stdio.h>
int check(int);
int main(){
    int v,u;
    printf("Enter a number :");
    scanf("%d",&v);
    for (int i = v+1; i > v; i++)
    {   
        u=check(i);
        if(u==0){
            printf("The next prime number is :%d",i);
            break;
        }
    }  
}
int check(int x){
int y;
  if (x == 0 || x == 1){
    return 1;
  }
  for (y = 2; y < x ; ++y) {


    if (x % y == 0) {
    return 1;
    }
  }
    return 0;
}
*/


/*Question 15
#include<stdio.h>
int check(int);
int main(){
    int n,y,x=2;
    printf("Enter the no. of prime no. you want ;");
    scanf("%d",&n);
    while(n>0){
        while(x){
            
            if(check(x)==0){
            }
            else{
                printf("%d\n",x);
                x++;
                break;
            }
            x++;
        }
        n--;
    }

    
}
int check(int x){
    int b=2,m=0;
    if(x==0 || x==1){
        m=0;
    }
    else if(x==2){
        m=1;
    }
    else{
        while(b<x){
            m=x%b;
            if(m==0){
                break;
            }
            else{
                b++;
            }
        }
    }
    return m;
}*/


/*Question 16
#include<stdio.h>
int check(int);
int main(){
    int n,x;
    printf("Enter two numbers to print all prime numbers between them :");
    scanf("%d%d",&x,&n);
        while(x<n){
            
            if(check(x)==0){
            }
            else{
                printf("%d\n",x);
            }
            x++;
        }
    }

int check(int x){
    int b=2,m=0;
    if(x==0 || x==1){
        m=0;
    }
    else if(x==2){
        m=1;
    }
    else{
        while(b<x){
            m=x%b;
            if(m==0){
                break;
            }
            else{
                b++;
            }
        }
    }
    return m;
}
*/


/*Question 17
#include<stdio.h>
int fab(int);
int main(){
    int n;
    printf("how long do you need fibonacci series to be :");
    scanf("%d",&n);
    fab(n);
}
int fab(int z){
    int x,y,w,u;
    x=0;
    y=1;
    w=0;
    if (z==1){
        printf("%d ",x);
    }
    else if (z==2){
        printf("%d %d",x,x+1);
        
    }
    
    else {
        printf("%d %d ",x,x+1);
        while(w<=z-3){
            u=x+y;
            printf("%d ",u);
            u=x+y;
            x=y;
            y=u;
            w+=1;
        }
    }
}
*/


/*Question 18
#include<stdio.h>
int sqr(int);
int main(){
    int x;
    printf("Enter a number to find it's square : ");
    scanf("%d",&x);
    sqr(x);
}

int sqr(int n){
    printf("The square of %d is %d",n,n*n);
}
*/


/*Question 19
#include<stdio.h>
int cube(int);
int main(){
    int x;
    printf("Enter a number to find it's cube : ");
    scanf("%d",&x);
    cube(x);
}

int cube(int n){
    printf("The cube of %d is %d",n,n*n*n);
}
*/


/*Question 20
#include<stdio.h>
int series(int);
int fact(int);
int main(){
    int x;
    printf("Enter the number upto you want the sum of the series :");
    scanf("%d",&x);
    series(x);
}
int fact(int f){
    int u=1;
    while (f>1)
    {
        u=u*f;
        f--;
    }
    return u;
 }

int series(int n){
    int y=0;
    for (int i = 1; i <= n; i++)
    {
        y=y+(fact(i)/i);
    }
    printf("The sum of series is %d",y);
    
}
*/