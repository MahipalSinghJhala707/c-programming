//23/11/22
/*1
#include<stdio.h>
int main(){
    int x=-999999,i,y,z;
    printf("Enter the input ;");
    scanf("%d",&i);
    while(i!=-1){
        if(i>x){
            x=i;
        }
        scanf("%d",&i);
    }
    printf("The largest input you entered is %d",z);
}
*/
//2
#include<stdio.h>
int main(){
    int x=-99999999,i,y,z;
    printf("Enter the input ;");
    scanf("%d",&i);
    while(i!=-1){
        if(i>x){
            z=x;
            x=i;
        }
        else if(i>z){
            z=i;
        }
        scanf("%d",&i);
    }
    printf("The second largest input you entered is %d",z);
}
