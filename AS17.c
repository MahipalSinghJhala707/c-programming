/*Question 1
#include<stdio.h>
int check(int);
int main(){
    int a=1,b=0,c,i=10;
    while(i>0){
        printf("enter a number :");
        scanf("%d",&a);
        c=check(a);
        if(c==0){
            b=b+a;
        }
        else{
            break;
        }
        i--;
    }
    printf("the sum is %d",b);
    
}
int check(int x){
    int y=2,n,m=0;
    if(x==0 || x==1){
        m=0;
    }
    else if(x==2){
        m=1;
    }
    else{
        while(y<x){
            m=x%y;
            if(m==0){
                break;
            }
            else{
                y++;
            }
        }
    }
return m;
}
*/


/*Question 2
#include<stdio.h>
int main(){
    int x,y=2,m;
    printf("enter a number :  ");
    scanf("%d",&x);
    if(x==0 || x==1){
        m=0;
    }
    else if(x==2){
        m=1;
    }
    else{
        while(y<x){
            m=x%y;
            if(m==0){
                break;
            }
            else{
                y++;
            }
        }
    }
    if(m==0){
        printf("%d is not prime",x);
    }
    else{
        printf("%d is a prime number ",x);
    }
    return 0; 
}
*/


/*Question 3
#include<stdio.h>
int main(){
    int x,i=10;
    while(i>0){
        printf("Enter a number :");
        scanf("%d",&x);
        if(x==10){
            break;
        }
        printf("the number entered is %d\n",x);
        i--;
    }
}
*/


/*Question 4
#include<stdio.h>
int main(){
    int x,y=0,i=10;
    while(i>0){
        printf("Enter a number :");
        scanf("%d",&x);
        if(x<0){
            break;
        }
        y=y+x;
        i--;
    }
    printf("sum is %d",y);
}
*/


/*Question 5
#include<stdio.h>
int main(){
    int x,i=10;
    while(i){
        printf("Enter a number :");
        scanf("%d",&x);
        if(x==0){
            break;
        }
        printf("the number entered is %d\n",x);
    }
}
*/


/*Question 6
#include<stdio.h>
int check(int);
int main(){
    int x=1,y=0,z,i=10;
    while(i>0){
        printf("Enter a number :");
        scanf("%d",&x);
        z=check(x);
        if(z==0){
            y=y+x;
        }
        i--;
    }
    printf("the sum is %d",y);
    
}
int check(int n){
    int p=2,c,m=0;
    if(n==0 || n==1){
        m=0;
    }
    else if(n==2){
    m=1;
    }
    else{
        while(p<n){
            m=n%p;
            if(m==0){
                break;
            }
            else{
                p++;
            }
        }
    }
return m;
}
*/


/*Question 7
#include<stdio.h>
int main(){
    int x,i=10;
    while(i>0){
        printf("Enter a number :");
        scanf("%d",&x);
        if(x%10==0){
            continue;
        }
        printf("the number entered is %d\n",x);
        i--;
    }
}
*/


/*Question 8
#include<stdio.h>
int main(){
    int x,y=0,i=10;
    while(i>0){
        printf("Enter a number :");
        scanf("%d",&x);
        if(x<0){
            continue;
        }
        y=y+x;
        i--;
    }
    printf("sum is %d",y);
}
*/


/*Question 9
#include<stdio.h>
int main(){
    int x,i=10;
    while(i>0){
        printf("Enter a number :");
        scanf("%d",&x);
        if (x==0){
            break;
        }
        if(x%10==0){
            continue;
        }
        printf("the number entered is %d\n",x);
    }
}
*/


/*Question 10*/
#include<stdio.h>
int main(){
    int y=0,i=10;
    while(i>0){
        if(i%2==0){
        i--;
        continue;
        }
        else{
        y=y+i;
        i--;
        }
        
    }
    printf("sum is %d",y);
}