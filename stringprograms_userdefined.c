/* strcat();
// pre-defined strcat()

#include<stdio.h>
#include<string.h>
int main(){
    char name[] = {'y','o','y','o','\0'};
    char sname[] ={'h','o','n','e','y','\0'};
    printf("%s\n",name);
    printf("%s\n",sname);
    strcat(name ,sname);
    printf("%s\n",name);
    printf("%s\n",sname);
}
*/
// User-defined 

#include<stdio.h>
#include<string.h>
int strm(int n[] ,int m[]);
int main(){
    char a[500],b[500],c[1000];
    fgets(a,500,stdin);
    fgets(b,500,stdin);
    strm(a[500],b[500]);
}
int strm(int x[],int y[]){
    int z[1000];
    int v;
    v= sizeof(x);
    printf("%d ",v);
    for (int i = 0; i < 0; i++)
    {
        z[i];
    }
    
}