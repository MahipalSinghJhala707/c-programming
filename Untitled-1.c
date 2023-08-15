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

    printf("Enter the elements of second array ;");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }

    int k=0;
    i=0;
    j=0;
    while(i<n){
        while(j<n){
            if(a[i]>b[j]){
                c[k]=a[i];
                i++;
            }
            else{
                c[k]=b[i];
                j++;        
            }   
        }
        k++;
        }


    printf("\nThe merged array sorted is :");
    for ( i = 0; i < n*2; i++)
    {
        printf("%d ",c[i]);
    }
}
