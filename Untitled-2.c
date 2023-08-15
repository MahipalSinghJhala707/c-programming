#include<stdio.h>
int main(){
    int stack[100],n,i,p,m;
    int *ptr=stack;
    print("ENTER THE NO. OF ELEMENTS YOU WANT TO INSERT IN STACK :");
    scanf("%d",&n);
    printf("Enter the elements of stack :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&stack[i]);
    }
    printf("Enter the 1 if you want to push\nEnter 2 if you want to pop\n");
    scanf("%d",&p);
    if(p==1){
        printf("Enter the no. of elements to push :");
        scanf("%d",&m);
        while(i<n+m){
            scanf("%d",&stack[i]);
        }
        for ( int j = 0; j < n; j++)
        {
        printf("%d",stack[i]);
        }
    }
    else if(p==2){
        print("Enter the no. elments to pop :");
        scanf("%d",&m);
        i=i-m;
        while(i<n){
            stack[i]=0;
            i++;
        }
        for ( int j = 0; j < n; j++)
            {
            printf("%d",stack[i]);
            }
    }
}