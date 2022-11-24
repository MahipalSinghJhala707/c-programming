/*Question 1*///to sort greatest & smallest number in array using acending & decending method respectively.
/*#include<stdio.h>
int main(){
    int ar[5],i,j,s,t;
    printf("Enter the array elements : \n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&ar[i]);

    }


    for(i=0; i < 5; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(ar[i]>ar[j]){
                s=ar[i];
                ar[i]=ar[j];
                ar[j]=s;
            }
        }
        
    }
    printf(" The largest number %d \n",ar[i-1]);

    for(i=0; i < 5; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(ar[i]<ar[j]){
                t=ar[i];
                ar[i]=ar[j];
                ar[j]=t;
            }
        }
        
    }
    printf("THE smallest NUMBER IS %d\n",ar[i-1]);
    return 0;
}*/


/*Question 2*/// Insert an item at a particular place in an array .
/*#include<stdio.h>
int main(){
    int a[3][3],i,c,r,j,x;
    printf("Enter the position(row and column of 3 by 3 respectively) for the element to store : ");
    scanf("%d%d",&r,&c);
    printf("Enter the value of the element ;");
    scanf("%d",&x);
    a[r-1][c-1]=x;
    printf("The value of element (%d,%d) is %d",r,c,x);
} */


/*Question 3 To delete value of an element in array .
#include<stdio.h>
int main(){
    int a[5],i,x;
    printf("Enter the array elements : \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);

    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);

    }

    printf("Enter the the position of element you want to delete : ");
    scanf("%d",&x);
    a[x-1]=0;
    
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);

    }
}*/


/*Question 4
#include<stdio.h>
int main(){
    int ar[5],i,j,s,t;
    printf("Enter the array elements : \n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&ar[i]);

    }


    for(i=0; i < 5; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(ar[i]>ar[j]){
                s=ar[i];
                ar[i]=ar[j];
                ar[j]=s;
            }
        }
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d  ",ar[i]);

    }


}*/


/*Question 5 wap to delet duplicate itens in an array 
#include<stdio.h>
int main(){
    int ar[5],i,j,s,t;
    printf("Enter the array elements : \n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&ar[i]);

    }


    for(i=0; i < 5; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(ar[i]>tar[j]){
                s=ar[i];
                ar[i]=ar[j];
                ar[j]=s;
            }
        }
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d  ",ar[i]);

    }
}
*/


/* Wap a program to add two matrices 
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],n,m,o,p,i,j;
    printf("Enter the number of rows and cloumns for 1st matrix : ");
    scanf("%d%d",&n,&m);
    printf("Enter the number of rows and cloumns for 2nd matrix : ");
    scanf("%d%d",&o,&p);
    printf("Enter the elements of first martix : ");
    for ( i = 0; i < n ; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    printf("Enter the elements of second  martix : ");
    for ( i = 0; i < o ; i++)
    {
        for ( j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
    
    for ( i = 0; i < o ; i++)
    {
        for ( j = 0; j < p; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    printf("The addition of two martices is : \n");
    for ( i = 0; i < o ; i++)
    {
        for ( j = 0; j < p; j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
        
    }
return 0;
}
*/


/*wap to multiply two matrices */
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],n,m,o,p,i,j;
    printf("Enter the number of rows and cloumns for 1st matrix : ");
    scanf("%d%d",&n,&m);
    printf("Enter the number of rows and cloumns for 2nd matrix : ");
    scanf("%d%d",&o,&p);
    printf("Enter the elements of first martix : ");
    for ( i = 0; i < n ; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    printf("Enter the elements of second  martix : ");
    for ( i = 0; i < o ; i++)
    {
        for ( j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
    
    for ( i = 0; i < n ; i++)
    {
        for ( j = 0; j < p; j++)
        {
            c[i][j]=(a[i][j]*b[i][j]);
        }
        
    }
    printf("The multiplication of two martices is : \n");
    for ( i = 0; i < n ; i++)
    {
        for ( j = 0; j < p; j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
        
    }
return 0;
}