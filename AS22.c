/*Question 1
#include<stdio.h>
int swap(int* a,int* b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int x=2,y=3;
    printf("The variables are %d , %d\n",x,y);
    swap(&x,&y);
    printf("The variables are %d , %d\n",x,y);
}
*/


/*Question 2
#include<stdio.h>
int findMAX(int* ptr1,int* ptr2){
    if(*ptr1>*ptr2)
        return *ptr1;
    else
        return *ptr2;
}
int main(){
    int n1,n2;
    printf("enter here : ");
    scanf("%d%d",&n1,&n2);
    printf("The larger no. is %d",findMAX(&n1,&n2));

}
*/


/*Question 3
#include<stdio.h>
int calstringlength(char* ptr,int arraysize){
    int count=0;
    for (int i = 0; i < arraysize; i++)
    {
        if(*ptr==0)
            break;
        else{
            count++;
            ptr++;
            }
    }
    return count; 
}

int main(){
    char a[40]="string";
    printf("The lenght of string is %d .",calstringlength(a,40));

}
*/


/*Question 4
#include<stdio.h>
int vowels=0;
int cons=0;
int calstringlength(char* ptr,int arraysize){
    int count=0;
    for (int i = 0; i < arraysize; i++)
    {
        if(*ptr==0)
            break;
        else{
            count++;
            ptr++;
            }
    }
    return count; 
}
int vclen(char* ptr,int arraysize){
    char b[10]={'a','e','i','o','u','A','E','I','O','U'};
    for (int i = 0; i < arraysize; i++)
    {
        if(*ptr==0)
            break;
        else{
            for (int j = 0; j < 10; j++)
            {
                if(*ptr==b[j]){
                    vowels++;
                }
                
            }
            ptr++;
        }
    }
}


int main(){
    char a[40]="mAhipal";
    vclen(a,40);
    cons=calstringlength(a,40)-vowels;
    printf("The number of vowels & consonants in string are %d,%d respectively.",vowels,cons);
}
*/

/*Question 5
#include<stdio.h>
int sum(int* ptr,int size){
    int s=0;
    for(int i = 0; i < 10; i++){
        s+=*ptr;
        ptr++;
    }
    return s;
}

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    printf("The sum of all elements of the array is %d",sum(a,10));
}
*/


/*Question 6 
#include<stdio.h>
int rev(int* ptr,int size){
    for(int i = 0; i < 10; i++){
        printf("%d , ",*ptr);
        ptr--;
    }
}

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    rev(a+9,10);
}
*/


/*Question 7
#include<stdio.h>
int calstringlength(char* ptr,int arraysize){
    int count=0;
    for (int i = 0; i < arraysize; i++)
    {
        if(*ptr==0)
            break;
        else{
            count++;
            ptr++;
            }
    }
    return count; 
}

int revstr(char* ptr,int size){
    for(int i = 0; i < 10; i++){
        printf("%c ",*ptr);
        ptr--;
    }
}

int main(){
    char a[40]="string";
    for (int i = 0; i < 40; i++)
    {
        printf("%c ",a[i]);
    }
    printf("\n");
    int n=calstringlength(a,40);
    revstr(a+n-1,40);
}
*/