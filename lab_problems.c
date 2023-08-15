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
void pitho(int,int,int);
int main(){
    int x,y,z,l;
    printf("enter the numbers");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x>y && x>z)
        pitho(y,z,x);
    else if(y>x && y>z)
        pitho(x,z,y);
    else
        pitho(x,y,z);

}
void pitho(int a,int b, int c){
    if((c*c)==((a*a)+(b*b)))
        printf("yes");
    else
        printf("no");
}