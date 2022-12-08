#include<stdio.h>
void firstdisplay();
void seconddisplay();

static int common ;

int main(){
    common = 10 ;
    printf("In main file %d \n",common);
    firstdisplay();
    seconddisplay();
}