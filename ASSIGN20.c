/*Question 1
#include<stdio.h>
struct employee{
    int id;
    char *name;
    float salary;
};

int main(){
    struct employee e1,e2,e3;
    e1.id=1050;
    e2.id=1051;
    e3.id=1052;
    e1.name ="yoyo";
    e2.name ="honey";
    e3.name ="singh";
    e1.salary = 100000;
    e2.salary = 200000;
    e3.salary = 300000;
    printf("The data of employee 1 is given below ;\n");
    printf("Id = %d\nName = %s\nSalary = %f Rs\n\n",e1.id,e1.name,e1.salary);
    printf("The data of employee 2 is given below ;\n");
    printf("Id = %d\nName = %s\nSalary = %f Rs\n\n",e2.id,e2.name,e2.salary);
    printf("The data of employee 3 is given below ;\n");
    printf("Id = %d\nName = %s\nSalary = %f Rs\n\n",e3.id,e3.name,e3.salary);
}
*/


/*Question 2
#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    char *name[50];
    float salary;
};

int main(){
    struct employee e1,e2,e3;
    printf("Enter the data of first employee as Id then salary and then name ;");
    scanf("%d%f%s",&e1.id,&e1.salary,&e1.name);
    printf("Enter the data of first employee as Id then salary and then name ;");
    scanf("%d%f%s",&e2.id,&e2.salary,&e2.name);
    printf("Enter the data of third employee as Id then salary and then name ;");
    scanf("%d%f%s",&e3.id,&e3.salary,&e3.name);

    printf("The data of employee 1 is given below ;\n");
    printf("Id = %d\nName = %s\nSalary = %f Rs\n\n",e1.id,e1.name,e1.salary);
    printf("The data of employee 2 is given below ;\n");
    printf("Id = %d\nName = %s\nSalary = %f Rs\n\n",e2.id,e2.name,e2.salary);
    printf("The data of employee 3 is given below ;\n");
    printf("Id = %d\nName = %s\nSalary = %f Rs\n\n",e3.id,e3.name,e3.salary);

}
*/


/*Question 3
#include<stdio.h>
#include<string.h>
struct student {
    int sid;
    char *sname[50];
    int srollno;
    int smobile;
};

int main(){
    struct student x,y,z,w;
    printf("Enter the Ids of 4 students respectively :\n");
    scanf("%d%d",&x.sid,&y.sid);
    scanf("%d%d",&z.sid,&w.sid);
    printf("Enter the names of 4 students respectively :\n");
    scanf("%s%s",&x.sname,&y.sname);
    scanf("%s%s",&z.sname,&w.sname);
    printf("Enter the roll numbers of 4 students respectively :\n");
    scanf("%d%d",&x.srollno,&y.srollno);
    scanf("%d%d",&z.srollno,&w.srollno);
    printf("Enter the mobile-number of 4 students respectively :\n");
    scanf("%d%d",&x.smobile,&y.smobile);
    scanf("%d%d",&z.smobile,&w.smobile);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    printf("The informations of 1st student are :\n");
    printf("Name = %s \nID = %d \nRoll No. = %d \nMobile number = %d\n",x.sname,x.sid,x.srollno,x.smobile);
    printf("The informations of 2nd student are :\n");
    printf("Name = %s \nID = %d \nRoll No. = %d \nMobile number = %d\n",y.sname,y.sid,y.srollno,y.smobile);
    printf("The informations of 3rd student are :\n");
    printf("Name = %s \nID = %d \nRoll No. = %d \nMobile number = %d\n",z.sname,z.sid,z.srollno,z.smobile);
    printf("The informations of 4th student are :\n");
    printf("Name = %s \nID = %d \nRoll No. = %d \nMobile number = %d\n",w.sname,w.sid,w.srollno,w.smobile);
    return 0;
}
*/


/*Question 4
#include<stdio.h>
struct birthday
{
   int date;
   int month;
   int year;
};

int main(){
    struct birthday v,w,x,y,z;
    printf("Enter the first birthdate :");
    scanf("%d%d%d",&v.date,&v.month,&v.year);
    printf("Enter the second birthdate :");
    scanf("%d%d%d",&w.date,&w.month,&w.year);
    printf("Enter the third birthdate :");
    scanf("%d%d%d",&x.date,&x.month,&x.year);
    printf("Enter the fourth birthdate :");
    scanf("%d%d%d",&y.date,&y.month,&y.year);
    printf("Enter the fifth birthdate :");
    scanf("%d%d%d",&z.date,&z.month,&z.year);
    printf("The dates are as follow :-\n");
    printf("First = %d/%d/%d\n",v.date,v.month,v.year);
    printf("Second = %d/%d/%d\n",w.date,w.month,w.year);
    printf("Third = %d/%d/%d\n",x.date,x.month,x.year);
    printf("Fourth = %d/%d/%d\n",y.date,y.month,y.year);
    printf("Fifth = %d/%d/%d\n",z.date,z.month,z.year);
}
*/


/*Question 5
#include<stdio.h>
#include<string.h>
struct student 
{
    int ID ;
    char *name[40];
    float phymarks ;
    float chemarks ;
    float mathsmarks ;
};

int main(){
    struct student s1,s2,s3,s4,s5;
    printf("Enter the info of 1st student as ID , name , physics marks , chemistry marks ,mathsmarks\n");
    scanf("%d%s",&s1.ID,&s1.name);
    scanf("%f%f%f",&s1.phymarks,&s1.chemarks,&s1.mathsmarks);
    printf("Enter the info of 2nd student as ID , name , physics marks , chemistry marks ,mathsmarks\n");
    scanf("%d%s",&s2.ID,&s2.name);
    scanf("%f%f%f",&s2.phymarks,&s2.chemarks,&s2.mathsmarks);
    printf("Enter the info of 3rd student as ID , name , physics marks , chemistry marks ,mathsmarks\n");
    scanf("%d%s",&s3.ID,&s3.name);
    scanf("%f%f%f",&s3.phymarks,&s3.chemarks,&s3.mathsmarks);
    printf("Enter the info of 1st student as ID , name , physics marks , chemistry marks ,mathsmarks\n");
    scanf("%d%s",&s4.ID,&s4.name);
    scanf("%f%f%f",&s4.phymarks,&s4.chemarks,&s4.mathsmarks);
    printf("Enter the info of 1st student as ID , name , physics marks , chemistry marks ,mathsmarks\n");
    scanf("%d%s",&s5.ID,&s5.name);
    scanf("%f%f%f",&s5.phymarks,&s5.chemarks,&s5.mathsmarks);
    printf("\nThe info of student no. 1 are as follow :\n");
    printf("Name = %s\nID = %d\nPhysics = %f\nChemistry = %f\nMaths = %f\n",s1.name,s1.ID,s1.phymarks,s1.chemarks,s1.mathsmarks);
    printf("\nThe info of student no. 2 are as follow :\n");
    printf("Name = %s\nID = %d\nPhysics = %f\nChemistry = %f\nMaths = %f\n",s2.name,s2.ID,s2.phymarks,s2.chemarks,s2.mathsmarks);
    printf("\nThe info of student no. 3 are as follow :\n");
    printf("Name = %s\nID = %d\nPhysics = %f\nChemistry = %f\nMaths = %f\n",s3.name,s1.ID,s3.phymarks,s3.chemarks,s3.mathsmarks);
    printf("\nThe info of student no. 4 are as follow :\n");
    printf("Name = %s\nID = %d\nPhysics = %f\nChemistry = %f\nMaths = %f\n",s4.name,s4.ID,s4.phymarks,s4.chemarks,s4.mathsmarks);
    printf("\nThe info of student no. 5 are as follow :\n");
    printf("Name = %s\nID = %d\nPhysics = %f\nChemistry = %f\nMaths = %f\n",s5.name,s5.ID,s5.phymarks,s5.chemarks,s5.mathsmarks);
    return 0;
}
*/


/*Question 6
#include<stdio.h>
#include<string.h>
struct student 
{
    int ID ;
    char name[40];
    float phymarks ;
    float chemarks ;
    float mathsmarks ;
};

int main(){
    struct student s1,s2,s3,s4,s5;
    int p1,p2,p3,p4,p5;
    printf("Enter the info of 1st student as ID , name , physics marks , chemistry marks ,mathsmarks\n");
    scanf("%d%s",&s1.ID,&s1.name);
    scanf("%f%f%f",&s1.phymarks,&s1.chemarks,&s1.mathsmarks);
    printf("Enter the info of 2nd student as ID , name , physics marks , chemistry marks ,mathsmarks\n");
    scanf("%d%s",&s2.ID,&s2.name);
    scanf("%f%f%f",&s2.phymarks,&s2.chemarks,&s2.mathsmarks);
    printf("Enter the info of 3rd student as ID , name , physics marks , chemistry marks ,mathsmarks\n");
    scanf("%d%s",&s3.ID,&s3.name);
    scanf("%f%f%f",&s3.phymarks,&s3.chemarks,&s3.mathsmarks);
    printf("Enter the info of 1st student as ID , name , physics marks , chemistry marks ,mathsmarks\n");
    scanf("%d%s",&s4.ID,&s4.name);
    scanf("%f%f%f",&s4.phymarks,&s4.chemarks,&s4.mathsmarks);
    printf("Enter the info of 1st student as ID , name , physics marks , chemistry marks ,mathsmarks\n");
    scanf("%d%s",&s5.ID,&s5.name);
    scanf("%f%f%f",&s5.phymarks,&s5.chemarks,&s5.mathsmarks);
    p1 = (s1.phymarks+s1.chemarks+s1.mathsmarks)/3;
    p2 = (s2.phymarks+s2.chemarks+s2.mathsmarks)/3;
    p3 = (s3.phymarks+s3.chemarks+s3.mathsmarks)/3;
    p4 = (s4.phymarks+s4.chemarks+s4.mathsmarks)/3;
    p5 = (s5.phymarks+s5.chemarks+s5.mathsmarks)/3;
    printf("The percentage of student no. 1 = %d\n",p1);
    printf("The percentage of student no. 2 = %d\n",p2);
    printf("The percentage of student no. 3 = %d\n",p3);
    printf("The percentage of student no. 4 = %d\n",p4);
    printf("The percentage of student no. 5 = %d\n",p5);
    return 0;
}
*/


/*Question 7
#include<stdio.h>
#include<string.h>
struct employee{
    int Id;
    char name[50];
    float salary;
};

int main(){
    struct employee e[20];
    printf("Enter the data as \nId\nSalary\nName\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the info of employee no. %d:- ",i+1);
        scanf("%d%f",&e[i].Id,&e[i].salary);
        fflush(stdin);
        fgets(e[i].name,50,stdin);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("The info of employee no. %d:-\n",i+1);
        printf("\nName = %s\nID = %d\nSalary = %f\n",e[i].name,e[i].Id,e[i].salary);
    }
    return 0;
}
*/


/*Question 8
#include<stdio.h>
#include<string.h>
struct student{
    int Id;
    char name[50];
    int rollno ;
};

int main(){
    struct student e[20];
    printf("Enter the data as \nId\nSalary\nName\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the info of employee no. %d:- ",i+1);
        scanf("%d%f",&e[i].Id,&e[i].rollno);
        fflush(stdin);
        fgets(e[i].name,50,stdin);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("The info of employee no. %d:-\n",i+1);
        printf("\nName = %s\nID = %d\nSalary = %f\n",e[i].name,e[i].Id,e[i].rollno);
    }
    return 0;
}
*/


/*question 9
#include<stdio.h>
struct birthday
{
   int date;
   int month;
   int year;
};

int main(){
    struct birthday e[20];
    printf("Enter the data as \nId\nSalary\nName\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the birthdate no. %d :",i+1);
        scanf("%d%d%d",&e[i].date,&e[i].month,&e[i].year);
    }
    for (int i = 0; i < 20; i++)
    {
      printf("%d.) %d/%d/%d\n",i+1,e[i].date,e[i].month,e[i].year);  
    }
    return 0;
}
*/


/*Question 10*/
#include<stdio.h>
struct marks
{
    int phmarks;
    int mathmarks;
    int chemmarks;
};

int main(){
    struct marks s[20];
    printf("Enter the marks in this order\n1. Physics\n2. Maths\n3. Chemistry\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the marks of student no. %d :",i+1);
        scanf("%d%d%d",&s[i].phmarks,&s[i].mathmarks,&s[i].chemmarks);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("The marks of student no. %d :\n",i+1);
        printf("Physics = %d\nMaths = %d\nChemistry = %d\n\n",s[i].phmarks,s[i].mathmarks,s[i].chemmarks);
    }
    return 0;
}
