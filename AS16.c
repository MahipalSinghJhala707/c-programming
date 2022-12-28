/*Question 1
#include<stdio.h>
int sum(int);
int main(){
    int a;
    printf("Enter the natural upto you want the sum : ");
    scanf("%d",&a);
    sum(a);
}
int sum(int x){
    int i=1,s=0;
    while(i<=x){
        s=s+i;
        i++;
    }
    printf("%d",s);
}
*/


/*Question 2
#include<stdio.h>
int sum(int);
int main(){
    int x,y;
    printf("Enter the first n mumber of natural numbers you want to sum :");
    scanf("%d",&x);
    sum(x);
}
int sum(int a){
    int i=2,s=0;
    while(i<=a*2){
        if(i%2==0){
            s=s+i;
        }
        i++;
    }
    printf("%d",s);
}
*/


/*Question 3
#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter the range :");
    scanf("%d",&n);
    sum(n);
}
int sum(int x){
    int i=1,s=0;
    while(i<=x*2){
        if(i%2==0){
        }
        else{
            s=s+i;
        }
        i++;
    }
    printf("%d",s);
}
*/


/*Question 4
#include<stdio.h>
int sum(int);
int main(){
    int a;
    printf("Enter the range : ");
    scanf("%d",&a);
    sum(a);
}
int sum(int x){
    int i=1,s=0;
    while(i<=x){
        s=s+(i*i);
        i++;
    }
    printf("%d",s);
}
*/


/*Question 5
#include<stdio.h>
int sum(int);
int main(){
    int a;
    printf("Enter the range : ");
    scanf("%d",&a);
    sum(a);
}
int sum(int x){
    int i=1,s=0;
    while(i<=x){
        s=s+(i*i*i);
        i++;
    }
    printf("%d",s);
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
int count(int);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    count(n);
}
int count(int x){
    int y=0;
    while(x>0){
        y++;
        x=x/10;
    }  
    printf("There are %d digits in given number  :)  ",y);  
}
*/


/*Question 8
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


/*Question 9
#include<stdio.h>
int rev();
int main(){
    rev();
}
int rev(){
    int a,b,c=0,d=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    int i=10;
    while(a>0){
        b=a%i;
        d=c+b;
        c=d*i;
        a=a/i;
    }
    printf("%d",d);
}
*/


/*Question 10
#include<stdio.h>
int fab();
int main(){
    fab();
}
int fab(){
    int x,y,z,w,u;
    printf("how long do you need fibonacci series to be : ");
    scanf("%d",&z);
    x=0;
    y=1;
    w=1;

    

    while(w<=z){
        if (w==1){
            printf("%d ",x);
            }
        if(w==2){
            printf("%d ",x+1);
        }
        if(w>=3){
        u=x+y;
        x=y;
        y=u;
        printf("%d ",u);}
        w++;
        }
}
*/


/*Question 11
#include<stdio.h>
int fab();
int main(){
    fab();
}
int fab(){
    int x,y,z,w,u;
    printf("how long do you need fibonacci series to be : ");
    scanf("%d",&z);
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


/*Question 12
#include<stdio.h>
int fab();
int main(){
    fab();
}
int fab(){
    int x,y,z,w,u,num;
    printf("enter the number to check if it is in fibonacci series: ");
    scanf("%d",&num);
    x=0;
    y=1;
    w=2;
    if (num==1 || num==0){
        printf("The number is in fibonacci series :)");
    }
    else {
        while(w<=num){
            u=x+y;
            if (u==num){
                printf("The number is in fibonacci series :)");
                break;
            }
            else{  
            u=x+y;
            x=y;
            y=u;
            w+=1;
            }

        }
    }   if (u!=num){
        printf("The number is not in fibonacci series :)");
    }
}
*/


/*Question 13
#include<stdio.h>
int hcf(int, int);
int main(){
    int x,y;
    printf("Enter two numbers to find their HCF :");
    scanf("%d%d",&x,&y);
    hcf(x,y);
}
int hcf(int n, int m){
    int z=1;
    for (int i = 2; i <= n && i <=m ; i++)
    {
        if (n%i==0 && m%i==0){
            z=i;
        }
    }
    printf("The hcf of %d and %d is %d",n,m,z);   
}
*/


/*Question 14*
#include<stdio.h>
int hcf(int, int);
int main(){
    int x,y,z;
    printf("Enter two numbers to find their HCF :");
    scanf("%d%d",&x,&y);
    z=hcf(x,y);
    if (z==1){
        printf("%d and %d are co-prime numbers ",x,y);
    }
    else {
        printf("%d and %d are not co-prime numbers ",x,y);
    }
}
int hcf(int n, int m){
    for (int i = 2; i <= n && i <=m ; i++)
    {
        if (n%i==0 && m%i==0){
            return 0;
        }
    }
    return 1; 
}
*/

/*Question 15
#include<stdio.h>
int check(int);
int main(){
    int n=100,x=2;
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


/*Question 18
#include<stdio.h>
int count_digit(int);
int check_armstrong(int,int);
int main(){
    int x,y,z;
    printf("Enter a number :");
    scanf("%d",&x);
    y=count_digit(x);
    z=check_armstrong(x,y);
    if(z==x)
        printf("%d is an armstrong number :)",x);
    else
        printf("%d is not an armstrong number :(",x);
}
int count_digit(int n){
    int m;
    while(n>0){
        n=n/10;
        m++;
    }
    return m;
}
int check_armstrong(int u,int v){
    int i,rem,a,b,c=0;
    while(u>0){
        rem=u%10;
        a=1;
        i=v;
            while(i>0){
                a=a*rem;
                if(i==1){
                    b=a+c;
                    c=b;
                }
                i--;
            }
        u=u/10;
    }
    return c;
}
*/


/*Quesrion 19
#include<stdio.h>
int count_digit(int);
int check_armstrong(int,int);
int main(){
    int x,y,z,j=1,n=0;
    printf("Enter a number upto you want armstrong series :");
    scanf("%d",&x);
    
        while(x>0){
            y=count_digit(j);
            z=check_armstrong(j,y);
            if(z==j){
                printf("%d  ",j);
            x--;   
            }
            j++;
            }

}

int count_digit(int n){
    int m;
    while(n>0){
        n=n/10;
        m++;
    }
    return m;
}
int check_armstrong(int u,int v){
    int i,rem,a,b,c=0;
    while(u>0){
        rem=u%10;
        a=1;
        i=v;
            while(i>0){
                a=a*rem;
                if(i==1){
                    b=a+c;
                    c=b;
                }
                i--;
            }
        u=u/10;
    }
    return c;
}
*/