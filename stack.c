#include<stdio.h>
void push(int *);
void pop(int *);
void show(int *);
int n;
int main(){
    int stack[100]={},i;
    int p;
    printf("ENTER THE NO. OF ELEMENTS YOU WANT TO INSERT IN STACK :");
    scanf("%d",&n);
    printf("Enter the elements of stack :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&stack[i]);
    }
    while(p!=-1){
        if(p==1)
        push(stack+n);
        
        else if(p==2)
        pop(stack+n);  
    }
    printf("The program is ended : \n");
    return 0;

}

void push(int *p){
    int x,i;
    printf("{Enter the no. of elements you want to push");
    scanf("%d",&x);
    printf("Enter the next elements :\n");
    for ( i = 0; i < x; i++)
    {
        scanf("%d",p+i);
    }
    n=n+x;
}

void pop(int *q){
    int i,j;
    printf("{Enter the no. of elements you want to pop");
    scanf("%d",&j);
    for ( i=0; i < j; i++)
    {
        *q=0;
        q=q-1;
    }
    n=n-j;
}

void show(int *r){

}