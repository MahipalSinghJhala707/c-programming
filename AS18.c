/*Question 1
#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    printf("Enter the array elements : \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    printf("The sum of array elements is %d .",sum);
}
*/


/*Question 2
#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    printf("Enter the array elements : \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    printf("The Average of array elements is %f .",(float)sum/10);
}
*/


/*Question 3
#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    printf("Enter the array elements : \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        sum=sum+a[i];

    }
    printf("The sum of array elements is %d .",sum);
}
*/


/*Question 4
#include<stdio.h>
int main(){
    int ar[10],i,j,s,t;
    printf("Enter the array elements : \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&ar[i]);

    }


    for(i=0; i < 10; i++){
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
}
*/


/*Question 5
#include<stdio.h>
int main(){
    int ar[10],i,j,s,t;
    printf("Enter the array elements : \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&ar[i]);

    }


    for(i=0; i < 10; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(ar[i]>ar[j]){
                s=ar[i];
                ar[i]=ar[j];
                ar[j]=s;
            }
        }
        
    }
    printf("The Smallest number %d \n",ar[0]);
}
*/


/*Question 6
#include<stdio.h>
int main(){
    int ar[10],i,j,s,t;
    printf("Enter the array elements : \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&ar[i]);

    }


    for(i=0; i < 10; i++){
        for ( j = i+1 ; j < 10; j++)
        {
            if(ar[i]>ar[j]){
                s=ar[i];
                ar[i]=ar[j];
                ar[j]=s;
            }
        }
        
    }
    printf("Acending order \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ,",ar[i]);

    }


    for(i=0; i < 10; i++){
        for ( j = i+1 ; j < 10; j++)
        {
            if(ar[i]<ar[j]){
                t=ar[i];
                ar[i]=ar[j];
                ar[j]=t;
            }
        }
        
    }
    printf("Descending order \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ,",ar[i]);

    }
    return 0;
}
*/


/*Question 7
#include<stdio.h>
int main(){
    int ar[10],i,j,s,t;
    printf("Enter the array elements : \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&ar[i]);

    }


    for(i=0; i < 10; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(ar[i]>ar[j]){
                s=ar[i];
                ar[i]=ar[j];
                ar[j]=s;
            }
        }
        
    }
    printf(" The largest number %d \n",ar[i-2]);
}*/


/*Question 8
#include<stdio.h>
int main(){
    int ar[10],i,j,s,t;
    printf("Enter the array elements : \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&ar[i]);

    }


    for(i=0; i < 10; i++){
        for ( j = i+1 ; j < 5; j++)
        {
            if(ar[i]>ar[j]){
                s=ar[i];
                ar[i]=ar[j];
                ar[j]=s;
            }
        }
        
    }
    printf(" The largest number %d \n",ar[1]);
}
*/


/*Question 9
#include<stdio.h>
int main(){
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


/*Question 10
#include<stdio.h>
int main(){
    int a[500],b[500],i,n;
    printf("Enter the number of array elements you want to enter : \n");
    scanf("%d",&n);
    printf("Enter the array elements : \n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);

    }
    for ( i = 0; i < n; i++)
    {
        a[i]=b[i];

    }
}*/

