#include<stdio.h>
int main () {
    char name[34] ;
    int dob ;
    long int ph ;
    printf("enter : ");
    scanf("%s",name);
    scanf("%d",&dob);
    scanf("%ld",&ph);
    printf("%s\n",name);
    printf("%d\n",dob);
    printf("%d\n",ph);

}
