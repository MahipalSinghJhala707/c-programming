/*Question 1
#include<stdio.h>
int great(int a[5]);
int main(){
    int a[5],i,x;
    printf("Enter the array elements : \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);

    }
    
    printf("The greatest element is %d .",great(a));
}

int great(int a[5]){
        int i,j,s,t;
    for(i=0; i < 5; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(a[i]>a[j]){
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
        
    }
    return a[i-1];
}
*/


/*Question 2
#include<stdio.h>
int great(int a[5]);
int main(){
    int a[5],i,x;
    printf("Enter the array elements : \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);

    }
    
    printf("The smallest element is %d .",great(a));
}

int great(int a[5]){
        int i,j,s,t;
    for(i=0; i < 5; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(a[i]>a[j]){
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
        
    }
    return a[0];
}
*/


/*Question 3
#include<stdio.h>
int sortas(int a[5]);
int sortds(int a[5]);
int main(){
    int a[5],i,x;
    printf("Enter the array elements : \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);

    }
    sortas(int a[5]);
    sortds(int a[5]);
}

int sortas(int a[5]){
    int s,i,j;
        for(i=0; i < 5; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(a[i]>a[j]){
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
        
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);

    }
}

int sortds(int a[5]){
    int s,i,j;
        for(i=0; i < 5; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(a[i]<a[j]){
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
        
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);

    }
}
*/


/*Question 4
#include<stdio.h>
int rep(int a[5]);
int main(){
    int a[5],i,x;
    printf("Enter the array elements : \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);

    }
    if(rep(a)==0){
        printf("Nothing is repeating ");

    }
    else{
        printf("The repeated element is %d .",rep(a));
    }
}

int rep(int a[5]){
        int i,j;
    for(i=0; i < 5; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(a[i]==a[j]){
                return a[j];
            }
        }
        
    }
    return 0;
}
*/


/*Question 5
#include<stdio.h>
int rev();
int main(){
    rev();
}
int rev(){
    int ar[500],i,n;
    printf("Enter the number of array elements you want to enter : \n");
    scanf("%d",&n);
    printf("Enter the array elements : \n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);

    }

    for ( i = n-1 ; i >= 0 ; i--)
    {
        printf("%d ",ar[i]);

    }
}
*/


/*Question 6
#include<stdio.h>
int frequency(int a[10]);
int main(){
    int a[10],i;
    printf("Enter the array elements : \n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);

    }
    frequency(a);
}


int frequency(int a[10]){
    int i,j,x;
    for ( i = 0; i < 10; i++)
    {
        x=0;
        if(i==j){
        }
        else{
            for (j = 0; j < 10; j++)
            {
                if(a[i]==a[j]){
                    x++;
                }
            }
        }
        printf("The frequency of %d element of the array is %d\n",i+1,x); 
    }
}
*/


/*Question 7
#include<stdio.h>
int dup(int a[10]);
int main(){
    int a[10],i;
    printf("Enter the array elements : \n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);

    }
    dup(a);
}


int dup(int a[10]){
    int i,j,x=0;
    for ( i = 0; i < 10; i++)
    {
        
        for (j = i+1; j < 10; j++)
        {
            if(a[i]==a[j]){
                x++;
                break;
                }
        }  
    }
    printf("The number of duplicate items are %d",x);
}
*/


/*Question 8
#include<stdio.h>
int uniq(int a[10]);
int main(){
    int a[10],i;
    printf("Enter the array elements : \n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);

    }
    uniq(a);
}


int uniq(int a[10]){
    int i,j;
    for ( i = 0; i < 10; i++)
    {
        if(a[i]!=a[i-1]){
            printf("%d  ",a[i]);
        }
    }
}
*/


/*Question 9
#include<stdio.h>
int main(){
    int a[500],b[500],c[500],i,j,n;
    printf("Enter the number of elements in both array ;");
    scanf("%d",&n);
    printf("Enter the elements of first array ;");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the elements of second array ;");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    for ( i = 0; i < n; i++)
    {
        c[i]=a[i];
        c[n+i]=b[i];
    }

    printf("The merged array is :");
    for ( i = 0; i < n*2; i++)
    {
        printf("%d ",c[i]);
    }
}
*/


/*Question 10*/
#include<stdio.h>
int main(){
    int a[500],b[500],c[500],i,j,n,s;
    printf("Enter the number of elements in both array ;");
    scanf("%d",&n);
    printf("Enter the elements of first array ;");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i < n; i++){
        for ( j = i+1 ; j < n; j++)
        {
            if(a[i]<a[j]){
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
    }

    printf("Enter the elements of second array ;");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0; i < n; i++){
        for ( j = i+1 ; j < n; j++)
        {
            if(b[i]<b[j]){
                s=b[i];
                b[i]=b[j];
                b[j]=s;
            }
        }
    }

    for ( i = 0; i < n; i++)
    {
        c[i]=a[i];
        c[n+i]=b[i];
    }

    printf("The merged array is :");
    for ( i = 0; i < n*2; i++)
    {
        printf("%d ",c[i]);
    }

    for(i=0; i < n*2; i++){
        for ( j = i+1 ; j < n*2; j++)
        {
            if(c[i]<c[j]){
                s=c[i];
                c[i]=c[j];
                c[j]=s;
            }
        }
    }

    printf("\nThe merged array sorted is :");
    for ( i = 0; i < n*2; i++)
    {
        printf("%d ",c[i]);
    }
}
