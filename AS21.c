/*Question 1
#include<stdio.h>
int length(char a[]);
int main(){
    int x;
    char str[]={'s','t','r','i','n','g'};
    x=length(str);
    printf("The length of string is %d",x);
    return 0;
}

int length(char a[]){
    int i=0;
    while(1){
        if(a[i]!=0)
            i++;
        
        else 
            break;
        
    }
    return i;
    
}
*/



/*Question 2
#include<stdio.h>
#include<string.h>
int compare(char p[],char q[]);

int main(){
    char str1[100]={};
    char str2[100]={};
    int x;
    printf("Enter the elements of first array;\n");
    fgets(str1,100,stdin);
    printf("Enter the elements of second array;\n");
    fgets(str2,100,stdin);

    x=compare(str1,str2);
    if(x==100){
        printf("The strings are equal\n");
    }
    else{
        printf("The strings are not equal\n");
    }

}

int compare(char p[],char q[]){
    int z = 0 , i = 0;
    for(z=0;z<100;z++){
        if(p[z]==q[z]){
            i++;
        }
    }
    return i;
}
*/

/*Question 3
#include<stdio.h>
int vowels=0;
int cons=0;
int vclen(char* ptr1,int arraysize){
    char b[10]={'a','e','i','o','u','A','E','I','O','U'};
    int i;
    for ( i = 0; i < arraysize; i++)
    {
        if(*ptr1==0)
            break;
        else{
            int s= vowels;
            for (int j = 0; j < 10; j++)
            {
                if(*ptr1==b[j]){
                    vowels++;
                }
                
            }
            if(s==vowels)
                cons++;
            ptr1++;
        }
    }

    printf("The number of vowels & consonants in string are %d,%d respectively.",vowels,cons);
}


int main(){
    char a[40]="Mahipal";
    vclen(a,40);
}
*/


/*Question 4*/
#include<stdio.h>

int main(){
    char a[40]="Mahipal";
    vclen(a,40);
}


/*Question 6
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
    int n=calstringlength(ptr,40);
    ptr=ptr+n-1;
    for(int i = 0; i < 10; i++){
        printf("%c",*ptr);
        ptr--;
    }
}

int main(){
    char a[40]="string";
    for (int i = 0; i < 40; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    
    revstr(a,40);
}
*/