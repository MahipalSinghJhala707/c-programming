#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data ;
    struct node *link ;
}node;

int i;
node *head = NULL;
node *next = NULL;
void create();
void add_top();
void add_bottom();
void print_data(node *);
void add_middle(node *);
void delete_top();
void delete_bottom(node *);
void delete_middle(node *);
int main(){
    int v;
    printf("Hello what would you like to do");
    printf("\n_____________________\n");
    while(1){
        printf("\n_____________________\n");
        printf("\nEnter 1 to create link list\nEnter 2 to display the link list\nEnter 3 to add a member at the top .\nEnter 4 to add a member at bottom\nEnter 5 to add a member in the middle\nEnter 6 to delete at the top\nEnter 7 to delete from bottom .\nEnter 8 to delet from middle\nEnter 0 to end");
        printf("\n___________________\n");
        scanf("%d",&v);
        switch (v)
        {
        case 0:
            return 0;
            break;
        case 1:
            create();
            break;
        case 2 :
            print_data(head);
            break;
        case 3 :
            add_top();
            break;
        case 4 :
            add_bottom();
            break;
        case 5 :
            add_middle(head);
            break;
        case 6 :
            delete_top();
            break;
        case 7 :
            delete_bottom(head);
            break;
        case 8 :
            delete_middle(head);
            break;
        default:
            printf("\nEnter a valid input T_T \n");
            break;
        }
    }
}


void create(){
    int x;
    printf("Enter the no. of elements you want : ");
    scanf("%d",&x);
    if(x<=0){
        printf("Enter valid number of members \n");
        return;
    }
    node *temp = NULL;
    node * new = NULL ;
    for ( i = 0; i < x; i++)
    {
        new = (node *)malloc(sizeof(node));
        printf("Enter an number : ");
        scanf("%d",&new->data);
        
        if (i==0){   
            head = new ;
            }
        
        else{
            temp->link=new;
        }
        temp=new;
        
    }
    new->link = NULL;
    }
    


void print_data(node * ptr){
    if(head==NULL)
    {   
        printf("You don't have any list created to display");
    }
    else{
        printf("THE DATA OF LIST  BELOW  :\n");
        for ( int j = 0; j < i ; j++)
        {   
            printf("%d\t",ptr->data);
            ptr = ptr->link;
    
        }
    }
}

void add_top(){
    if(head==NULL){
        printf("You first have to create a list .");
        }

    else{
        node * temp = NULL;
        temp = head;
        node * new = NULL;
        new = (node *)malloc(sizeof(node));
        head = new;
        head->link = temp;
        printf("ENTER THE NO. :");
        scanf("%d",&head->data);
        i++;
        }
}

void add_bottom(){
        if(head==NULL){
            printf("You first have to create a list .");
            }
        else{
            node * temp = NULL;
            temp = head;
            node * new = NULL;
            new = (node *)malloc(sizeof(node));

            while(temp->link != NULL){
                temp = temp->link;
            }
            
            printf("Enter a number :");
            scanf("%d",&new->data);
            temp->link = new;
            i++;
            } 
             
}

void add_middle(node *ptr){
    if(head != NULL){
    int a;
    printf("\nEnter the position where you want to add the new member :");
    scanf("%d",&a);
    if (a>i || a<=0){
        printf("Please Enter a valid position T_T");
    }
    else {
    node * temp = NULL;
    for (int j = 0; j < a-1; j++)
    {
        temp = ptr;
        ptr = ptr->link;
    }
    node * new = NULL;
    new = (node *)malloc(sizeof(node));
    printf("Enter the number you want to add. :");
    scanf("%d",&new->data);
    temp->link = new;
    new->link = ptr ;
    i++;
    }
    }
    else{
        printf("\nFirst create a list\n");
    }

}

void delete_top(){
    if(head != NULL){
    head = head->link;
    i--;
    }
    else{
        printf("\nFirst create a list\n");
    }
}

void delete_bottom(node *temp){
    if(head != NULL){
        int x = i;
        while(x>1){
                temp = temp->link;
                x--;
            }
        free(temp);
        temp = NULL;
        i--;
    }
    else{
        printf("\nFirst create a list\n");
    }
}

void delete_middle(node * ptr){
    if(head != NULL){
    int a;
    printf("\nEnter the position where you want to delete a member :");
    scanf("%d",&a);
    if (a>i || a<=0){
        printf("Please Enter a valid position T_T");
    }
    else {
    node * temp = NULL;
    for (int j = 0; j < a-1; j++)
    {
        temp = ptr;
        ptr = ptr->link;
    }
    temp->link = ptr->link;
    i--;
    }
    }
    else{
        printf("\nFirst create a list\n");
    }
}

